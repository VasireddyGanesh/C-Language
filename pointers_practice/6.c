//copying one array into another array using pointers
#include<stdio.h>
int main()
{
    int a[10],b[10];
    int *p1,*p2;
    p1=a;
    p2=b;
    printf("Enter the elements of a \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",(p1+i));
    }
    for(int i=0;i<10;i++)
    {
        *(p2+i)=*(p1+i);
    }
    for(int i=0;i<10;i++)
    {
        printf("%d %d ",*(p2+i),*(p1+i));
    }
    return 0;
}