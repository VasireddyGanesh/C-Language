#include<stdio.h>
int add(int,int);
int main()
{
 int num1=-3,num2=-7,res;
 res=add(num1,num2);
 printf("%d",res);
 return 0;
}
int add(int x,int y)
{
 int sum;
 sum=x+y;
 return sum;
}