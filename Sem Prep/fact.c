#include<stdio.h>

long fact(int n)
{
//	static int prod=1;
	if(n==0)
	return 1;
	else 
	{
//		prod*=n;
		return n*fact(n-1);
	}
}


int main()
{
	int n;
	scanf("%d",&n);
	long res=fact(n);
	printf("fact is %d",res);
	return 0;
}
