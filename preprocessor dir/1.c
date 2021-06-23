#include<stdio.h>
#include<stdlib.h>
#define A 10
#define B
#ifdef B
int main()
{
#ifdef B
printf("Hello world\n");
#endif
#error 'excute error'
 printf("Execution error\n");
#if A==10
printf("hello");
#elif
printf("2nd Hello world\n");
#else
printf("3rd Hello world\n");
#endif
return 0;
}
#endif