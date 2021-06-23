//to perform arthmetic operations using an array of function pointers

#include<stdio.h>
int add(int ,int);
int subtract(int ,int);
int multiply(int ,int);
int main()
{
    int result;
    int (*ptr[3])(int,int)={add ,subtract,multiply};
    result=ptr[0](3,2);
    printf("%d",result);
    return 0;
}

int add(int a,int b)
{
   return a+b;
}

int subtract(int a,int b)
{
   return a-b;
}

int multiply(int a,int b)
{
    return a*b;
}