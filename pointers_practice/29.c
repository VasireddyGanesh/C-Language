#include<stdio.h>
int main()
{
	int num=20;
	void *ptr=&num;
	int *cptr=ptr;
	printf("Num is %d , %d ",*((int*)ptr),*cptr);
	return 0;
}
