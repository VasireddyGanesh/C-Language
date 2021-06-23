#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **a,i,j,r1,c1;
    scanf("%d %d",&r1,&c1);
    a=(int **)malloc(r1*sizeof(int*));
    for(i=0;i<r1;i++)
    {
        a[i]=(int *)malloc(c1*sizeof(int));
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
 for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a[i][j]);
        }
    }
    return 0;
}