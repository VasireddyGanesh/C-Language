#include<stdio.h>
int main()
{
    int i,m;
    i=10;
    m=10;
    i=i++;//first do increment and then assign the old copy of it
    printf("i is %d\n",i);
    i=m++;
    printf("m is %d\n",m);
    return 0;
}