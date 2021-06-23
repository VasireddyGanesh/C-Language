#include<stdio.h>
void add();
int main()
{
 add();
 return 0;
}
void add()
{
  int num1,num2,res;
  printf("eneter two integers\n");
  scanf("%d %d",&num1,&num2);
  res=num1+num2;
  printf("%d",res);
}