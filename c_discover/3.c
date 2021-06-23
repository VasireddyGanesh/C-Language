//writing an auto keyword allows to declare  a function inside another function.

#include<stdio.h>
int main()
{
 printf("main \n");
 auto void fun();
 fun();
 void fun()
 {
     printf("fun\n");
 }
 //fun();
 return 0;
}