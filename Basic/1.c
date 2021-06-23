#include<stdio.h>

int main()
{
	int a;
	signed int sa;
	unsigned int ua;
	char c;
	signed char sc;
	unsigned char uc;
	short s;
	short signed ss;
	short unsigned su;
	long l;
	long signed ls;
	long unsigned lu;
	float f;
	double d;
	long double ld;
	printf("Size is %d\n",sizeof(a));
	printf("Size is %d\n",sizeof sa);
	printf("Size is %u\n",sizeof ua);
	printf("Size is %d\n",sizeof c);
	printf("Size is %d\n",sizeof sc);
	printf("Size is %d\n",sizeof uc);
	printf("Size is %hd\n",sizeof s);
	printf("Size is %hd\n",sizeof ss);
	printf("Size is %hu\n",sizeof su);
	printf("Size is %ld\n",sizeof l);
	printf("Size is %ld\n",sizeof ls);
	printf("Size is %lu\n",sizeof lu);
	printf("Size is %d\n",sizeof f);
	printf("Size is %d\n",sizeof d);
	printf("Size is %d\n",sizeof ld);
	return 0;
}
