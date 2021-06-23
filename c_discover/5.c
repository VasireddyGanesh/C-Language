// associativity of comma operator  .

#include<stdio.h>
int main()
{
    int i;
    i=(1,2,3);// associativity of comma operator is left to right
    printf("%d",i);
    return 0;
}