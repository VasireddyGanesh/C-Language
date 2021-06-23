#include<stdio.h>

int gcd(int a,int b)
{
	if(a==b)
	return a;
	if(a>b)
	a=a-b;
	else if(b>a)
	b=b-a;
    return gcd(a,b);
}


int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int res=gcd(a,b);
	printf("gcd is %d",res);
	return 0;
}
