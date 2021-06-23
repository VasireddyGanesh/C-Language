//rotate an array by 90 degrees
#include<stdio.h>
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int i,j;
    for(i=0;i<3;i++)
    {
       for(j=2;j>=0;j--)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
    
}