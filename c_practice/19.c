//to understand the use of sprintf function(this funtion is called as string print)

#include<stdio.h>
int main()
{
    char buffer[50];
    int a=10;
    sprintf(buffer,"the number a is %d",a);
    printf("%s",buffer);
    return 0;
}