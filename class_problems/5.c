#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("after swaping a is %d\n",a);
    printf("after swaping b is %d\n",b);
    return 0;
}

void swap(int *ptr1,int *ptr2)
{
    *ptr1=*ptr1+*ptr2;
    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;
}