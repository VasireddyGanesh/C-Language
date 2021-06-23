//we shouldn't write function's definition inside another function acc to standard c.but gcc allowing it

#include<stdio.h>
void fun();
int main()
{
 printf("main \n");
 void fun()
 {
     printf("fun\n");
 }
 fun();
 return 0;
}