#include<stdio.h>

void func1(){
	printf("Func1 is called\n");
}

int main()
{
	void (*ptrFun)()=func1;//declaration
	ptrFun();//Calling
	(*ptrFun)();//2nd way of calling
	return 0;
}
