// arthmetic operations using an array of function pointers
#include<stdio.h>
int add(int ,int);
int subtract(int ,int);
int multiply(int ,int);
int division(int ,int);
int main()
{
    int a,b,c,i;
    int (*fun[4])(int,int)={add,subtract,multiply,division};
    printf("Enter the values of a and b\n");
    scanf("%d %d",&a,&b);
    printf(" Enter 0 to addition \n Enter 1 to subtraction \n Enter 2 to multipication \n Enter 3 to division \n");
    scanf("%d",&i);
    c=fun[i](a,b);
    printf("%d is the result\n",c);
    return 0;
}

int add(int a,int b)
{
    return a+b;
}

int subtract(int a, int b)
{
    return a-b;
}

int multiply(int a,int b)
{
    return a*b;
}

int division(int a,int b)
{
    return a/b;
}