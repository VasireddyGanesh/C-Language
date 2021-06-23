//input and output of an array using pointers
#include<stdio.h>
int main()
{
    int a[10],i;
    int *p1;
    p1=a;
    for(i=0;i<10;i++)
    {
        scanf("%d",(p1+i));
    }
    for(i=0;i<10;i++)
    {
    printf("%d ",*(p1+i));
    }
    return 0;
}