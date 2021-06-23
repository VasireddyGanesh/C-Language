#include<stdio.h>
int main()
{
	const int i=10;
	goto label1;
//	i=10;
	printf("i is %d",i);
	label1:
	printf("i-2 is %d",i-2);
	return 0;
}

