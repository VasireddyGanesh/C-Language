#include<stdio.h>
int main()
{
   int a[5]={1,2,3,4,5},(*p)[5]=&a;//this is pointer to an whole array [when we write *ptr = var_a this means pointer ptr is pointing to           an element of an array but not pointing to an entire array ]
   printf("%d ",**p);
   printf("%d",*((*p)+2));
    return 0;
}