//associativity of comma operator

#include<stdio.h>
int main()
{
    int x=10;
    int y=(x++,++x);//all  expersions in parenthesis will get evaluted
    printf("%d",y);
    return 0;
}