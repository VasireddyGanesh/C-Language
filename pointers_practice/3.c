//swapping two variables using pointers only
#include<stdio.h>
int main()
{
    int a,b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter values of a and b \n");
    scanf("%d %d",p1,p2);
    a=*p1+*p2;
    b=*p1-*p2;
    a=*p1-*p2;
    printf("a is %d and b is %d",*p1,*p2);
    return 0;
}