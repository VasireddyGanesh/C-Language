#include<stdio.h>
#include<stdlib.h>
int main()
{   int i;
    int *ptr=(int *)calloc(5,sizeof(int));
    for(i=0;i<5;i++)
    {
        *(ptr+i)=i;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",*(ptr+i));
    }
    ptr=realloc(ptr,10*sizeof(int));
    if(ptr==NULL)
    {
        printf("failed\n");
    }
    else
    {
        for(i=0;i<10;i++)
    {
        *(ptr+i)=i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",*(ptr+i));
    }
    }
    free(ptr);
    return 0;
}