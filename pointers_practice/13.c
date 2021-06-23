#include<stdio.h>
int main()
{
    int a,b,*ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    printf("Enter a and b values \n");
    scanf("%d %d",ptr1,ptr2);
    *(&a)=*(&a)+*(&b);
    printf("Sum is %d \n",*(&a));
    return 0;
}