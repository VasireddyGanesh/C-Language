#include<stdio.h>
int main()
{
 int n,i,j,k,a;
 printf("enter an integer value\n");
 scanf("%d",&n);
 a=n;
 for(i=1;i<=n;i++)
  { 
    if(i!=1)
      {
     for(k=1;k<i;k++)
       {
        printf("  ");
       }
      }  
    for(j=a;j>=1;--j)
    {
    printf("%d ",j);
    }
  printf("\n");
  a--;
  }  
return 0;
}