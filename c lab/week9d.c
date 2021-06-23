//swaping of two values using call by reference
#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("After swaping a is %d and b is %d \n",a,b);
    return 0;
}

void swap(int *p1,int *p2)
{
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;   
}