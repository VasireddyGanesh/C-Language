#include<stdio.h>
int main()
{
    int a;
    int *ptr1=&a;
    int **ptr2=&ptr1;
    printf("Enter the value of \"a\":");
    scanf("%d",*ptr2);
    printf("value pointed by pointer ptr1 is %d\n",*ptr1);
    printf("value pointed by pointer to pointer ptr2 is %d\n",**ptr2);
    printf("Address of variable a is %p\n",ptr1);
    printf("Address of variable a is %p\n",*ptr2);
    return 0;
}