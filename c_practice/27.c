#include<stdio.h>
#include<ctype.h>
int main()
{
	struct person{
		int a;
		char b;
	};
	struct person p[]={1,65,3,66,5,67};
    printf("%c",p[0].b);
    return 0;
}
