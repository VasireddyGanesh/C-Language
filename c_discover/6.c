//precedence of comma operator

#include<stdio.h>
int main()
{
    int i=5,m=3;
    printf("%d \n",i,m);//here comma act as a sepreator
    printf("%d",(i,m));//here comma act as an operator
    return 0;
}