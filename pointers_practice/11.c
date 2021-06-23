//Addition of matrices using pointers
#include<stdio.h>
int main()
{
    int a[3][2],b[3][2],c[3][2],i,j;
    int (*p1),*p2;
    p1=&a[0][0];
    p2=&b[0][0];
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
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
          c[i][j]=(*p1)+(*p2);
          *(p1++);
          *(p2++);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("no.s are %d \n",c[i][j]);
        }
    } 
    return 0;
}
