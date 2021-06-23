//to print a pattern which has a hole in between with "*"
/*        *
         * *
        * * *
       * * * *
      * * * * *
     *         *
    * *       * *
   * * *     * * *
  * * * *   * * * *
 * * * * * * * * * * 
*/
#include<stdio.h>
int main()
{
   int k,m,i,j,n,a,b,c;
   printf("Enter no.of rows \n");
   scanf("%d",&n);
   m=2*n;
   for(i=0;i<n;i++)
   {
       for(k=0;k<m;k++)
       {
           printf(" ");
       }
       for(j=0;j<=i;j++)
       {
        printf("* ");
       }
       printf("\n");
      m--;  
   }
   m=n;
   c=2*n-2;
   for(i=0;i<n;i++)
   {
       for(k=0;k<m;k++)
       {
           printf(" ");
       }
       for(j=0;j<=i;j++)
       {
         printf("* ");
       }
       for(a=0;a<c;a++)
       {
           printf(" ");
       }
       for(b=0;b<=i;b++)
       {
           printf("* ");
       }
       c-=2;
       printf("\n");
       m--;
   }
    return 0;
}