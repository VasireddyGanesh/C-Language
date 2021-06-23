#include<stdio.h>
int main()
{
    int i;
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *ptr1=a;
    int *ptr2=&a[9];
    for(i=0;i<10;i++)
    {
        printf("%d ",*(ptr1+i));
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",*(ptr2-i));
    }
    printf("\n");
    printf("Before increment  %d \n",*ptr1);
    printf("after increment %d \n",*++ptr1);
    printf("Before decrement %d\n",*ptr2);
    printf("after decrement %d\n",*--ptr2);
    printf("difference between two pointers %d\n",ptr2-ptr1);
    return 0;
}