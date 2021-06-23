#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr=(int *)malloc(5*sizeof(int));
    *(ptr+0)=2;
    *(ptr+1)=10;
    *(ptr+2)=20;
    *(ptr+3)=30;
    *(ptr+4)=6;
    printf("%d",(*ptr)++);
    return 0;
}