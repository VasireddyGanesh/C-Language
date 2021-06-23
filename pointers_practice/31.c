#include<stdio.h>

void sum(int a,int b)
{
	printf("a+b = %d\n",a+b);
}

void sub(int a,int b)
{
	printf("a-b = %d\n",a-b);
}

void mult(int a,int b)
{
	printf("a*b = %d\n",a*b);
}


int main()
{
	printf("Address of main Function %u\n",main);
	void (*ptrFun[3])(int,int)={sum,sub,mult};
	for(int i=0;i<3;i++)
	{
		ptrFun[i](i,i+1);
	}
	return 0;
}
