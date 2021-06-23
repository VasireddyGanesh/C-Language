#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *ptr[5];//this is an array of 5 pointers to integers
    *(ptr+3)=(a+3);
    printf("%d",*ptr[3]);
    return 0;
}
