#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int (*ptr)[6]=&arr;
    printf("Printing array of elements using pointer to array :\n");
    for(int i=0;i<6;i++)
    {
        printf("%d\n",*(*(ptr)+i));
    }
    return 0;
}