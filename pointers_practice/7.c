//to swap two arrays using pointers
#include<stdio.h>
int main()
{
    int a[10],b[10];
    int *p1,*p2;
    p1=a;
    p2=b;
    for(int i=0;i<10;i++)
    {
        scanf("%d %d",(p1+i),(p2+i));
    }
    for(int i=0;i<10;i++)
    {
        int temp=*(p1+i);
        *(p1+i)=*(p2+i);
        *(p2+i)=temp;
        printf("%d %d ",*(p1+i),*(p2+i));
    }
    return 0;
}