#include<stdio.h>
int main()
{
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	num1=num2+num1;
	num2=num1-num2;
	num1=num1-num2;
	printf("num1 is %d and num2 is %d",num1,num2);
	return 0;
}
