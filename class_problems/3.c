#include<stdio.h>
int main()
{
    int a[6]={1,2,3,4,5,6};
    int * ptr=a;
    for(int i=0;i<6;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}