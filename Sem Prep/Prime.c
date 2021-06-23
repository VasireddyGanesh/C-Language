#include<stdio.h>
int main()
{
	int num,flag=0;
	scanf("%d",&num);
	if(num==1)
	{
		printf("Neither Prime Nor Composite");
		return 0;
	}
	else
	{
		for(int i=2;i<=num/2;i++)
		{
			if(num%i==0)
			{
				printf("Non Prime");
				flag=1;
				break;
			}
		}
		if(flag==0) printf("Prime");
	}
	return 0;
}
