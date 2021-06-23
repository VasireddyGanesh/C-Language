//to reverse an array using pointers
#include<stdio.h>
int main()
{
    int a[10],i,j=9;
    int *p1,temp;
    p1=a;
    for(i=0;i<10;i++)
    {
        scanf("%d",(p1+i));
    }
    for(i=0;i<10;i++)
    {
    printf("%d ",*(p1+i));
    }
    printf("\n");
    for(i=0;i<6;++i)
    {
        temp=*(p1+i);
        *(p1+i)=*(p1+j);
        *(p1+j)=temp;
        --j;
    }
    for(i=0;i<10;i++)
    {
    printf("%d ",*(p1+i));
    }
    return 0;
}