#include<stdio.h>
void fun(int arr[])
{
    printf("%u\n",sizeof(arr));//wrong usuage of sizeof//should pass length as seperate parameter
} 
int main()
{
    int arr[5]={1,2,3,4,5};
    fun(arr);
    printf("%u\n",sizeof(arr));
    return 0;
}