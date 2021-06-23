//scope of a global variable and local variable 

#include<stdio.h>
void fun();
int a=10;
int main()
{
   int a=5;
    {
       int c=a;
       a=15;
       printf("%d ",c);
    }
    printf("%d ",a);
    fun();
    return 0;
}
void fun()
{
    printf("%d ",a);
}