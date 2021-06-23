// precedence of comma operator .
#include<stdio.h>
int main()
{
    int i;
    i=1,2,3;// "=" operator has more precedence than comma operator.
    printf("%d",i);
    return 0;
}
