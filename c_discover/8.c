// precedence of comma operator

#include<stdio.h>
int main()
{
    int x=10,y;
    y=(x++,printf("x=%d \n",x),++x,printf("x = %d\n",x),x++);//all get evaluted
    printf("y=%d \n",y);
    printf("x=%d \n",x);
    return 0;
}