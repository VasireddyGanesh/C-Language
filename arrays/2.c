//rotate the matrix by n times in anti clockwise direction
#include<stdio.h>
int main()
{
    int i,j,n,r,c,k;
    printf("Enter no.of rows and columns and no.of times to rotate\n");
    scanf("%d %d %d",&r,&c,&n);
    int a[r][c+n];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<n;k++)
   { 
    for(i=0;i<r;i++)
    {
        for(j=c;j>0;--j)
        {
          a[i][j]=a[i][j-1];     
        }
        a[i][0]=a[i][c];
    }
   }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
} 