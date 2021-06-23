#include<stdio.h>
int main()
{
    int a[2],i;
    scanf("%d %d",&a[0],&a[1]);
    int *p;
    p=a;
    printf("%d \n",*p);
    printf("%d \n",*p);
    ++p;
    printf("%d",*p);
    ++a;//we cannot change the base address of an array but we can change the address of pointer to an array
    printf("%d",*a);
return 0;
}