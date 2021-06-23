#include<stdio.h>
int main()
{
    int a[5],*ptr1,i;
    ptr1=a;
    printf("Enter elements of the array \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",ptr1+i);
    }
    printf("The elements are \n");
    for(i=0;i<5;i++)
    {
        printf("%d",*(ptr1+i));
    }
    return 0;
}