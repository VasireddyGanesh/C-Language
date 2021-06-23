//program to reverse a number

#include<stdio.h>
int main()
{
	int i,a,b;
	scanf("%d",&a);
	for(;a>0;)
	{
		b=a%10;
		printf("%d",b);
		a=a/10;
	}
 return 0;
}