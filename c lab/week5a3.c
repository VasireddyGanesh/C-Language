#include<stdio.h>
int add(void);
int main()
{
 int res;
 res=add();
 printf("%d",res);
 return 0;
}
int add(void)
{
 int num1=5,num2=6,sum;
 sum=num1+num2;
 return sum;
}