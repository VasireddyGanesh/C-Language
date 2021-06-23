#include<stdio.h>
int main()
{
    int a,b,c,d,i,j;
    scanf("%d %d",&a,&b);
    fflush(stdin);
    int add[a][b],sum[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&add[i][j]);
            fflush(stdin);
        }
    }
    scanf("%d %d",&c,&d);
    fflush(stdin);
    int mult[c][d];
    for(i=0;i<c;i++)
    {
        for(j=0;j<d;j++)
        {
            scanf("%d",&mult[i][j]);
            fflush(stdin);
        }
    }
    if(a==c && b==d)
    {
     for(i=0;i<a;i++)
     {
         for(j=0;j<b;j++)
         {
             sum[i][j]=add[i][j]+mult[i][j];
         }
     }
    }
    else
    {
        printf("Addition is not possible \n");
    }
    printf("Transpose of the matrix is \n");
    for(i=(d-1);i>=0;i--)
    {
        for(j=(c-1);j>=0;j--)
        {
         printf("%d",mult[i][j]);  
        }
    }
    return 0;
}