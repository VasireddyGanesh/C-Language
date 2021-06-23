#include<stdio.h>

#if(x==0)
	#define y 25
//	printf("value is %d",y); not compiled yet
#else 
    #define y 30
#endif
#error go to hell
int main()
{
	#if(x==5)
	#define y 25
	printf("value is %d",y);
	#else 
    #define y 30
    printf("value is %d",y);
	#endif
	
	return 0;
}
