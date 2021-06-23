//to access two dimensional arrays using pointers
#include<stdio.h>
int main()
{
    int a[3][2],i,j;
    int (*p1);
    p1=&a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d ",*(p1));
            *(p1++);
        }
        printf("\n");
    } 
    return 0;
}
