#include<stdio.h>
#include<stdlib.h>
int main()
{   int i;
    int *ptr=(int *)calloc(5,sizeof(int));
    *ptr=1;
    *(ptr+1)=2;
    *(ptr+2)=3;
    *(ptr+3)=4;
    *(ptr+4)=5;
    for(i=0;i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }
    return 0;
}