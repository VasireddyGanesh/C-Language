#include<stdio.h>
int add(int ,int);

int main()
{
    int a=10,b=20;
    int (*ptr)(int ,int )=add;
    printf("%d",ptr(a,b));
    return 0;
}

int add(int x,int b)
{
    return x+b;
}