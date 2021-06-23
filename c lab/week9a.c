#include<stdio.h>
int main()
{
    int a;
    int *ptr=&a;
    printf("Enter the value of integer\n");
    scanf("%d",ptr);
    printf("Entered value of variable \"a\" is %d\n",*ptr);
    printf("Address of variable \"a\" is %p\n",ptr);
    printf("Address of variable \"a\" is %p\n",&a);
    return 0;
}