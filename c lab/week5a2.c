#include<stdio.h>
void add(int,int);
int main()
{
 int num1=-5,num2=6;
 add(num1,num2);
 return 0;
}
void add(int x,int y)
{
 int sum;
 sum=x+y;
 printf("%d",sum);
}