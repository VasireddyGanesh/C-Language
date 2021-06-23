//structures

#include<stdio.h>
int main()
{
 struct {
     int a;
     char b;
     int c;
 }a1,b1;
 printf("%d %d %d",a1.a,a1.b,a1.c);
 return 0;
}