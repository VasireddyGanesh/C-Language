#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int *ptr=arr;
    printf("Demo on pointer addition %d\n",*(ptr)+*(ptr+1));
    printf("Demo on pointer subtraction %d\n",*(ptr)-*(ptr+1));
    printf("Demo on pointer increment %d\n",*(++ptr));
    printf("Demo on pointer decrement %d\n",*(--ptr));
    printf("Demo on pointer comparison %d\n",(ptr+3)<(ptr));
}