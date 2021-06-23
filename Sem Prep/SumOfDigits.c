#include<stdio.h>
int main()
{
	int a,temp,sum=0;
	scanf("%d",&a);
	while(a>0)
	{
	  temp=a%10;
	  a=a/10;
	  sum+=temp;	
	}
	printf("%d",sum);
	return 0;
}
