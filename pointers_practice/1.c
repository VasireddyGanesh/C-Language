//input and output using pointers
#include<stdio.h>
int main()
{
    int i=77;
    int *ptr;
    ptr = &i;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n%d\n",i,&i);
    printf("%d\n",*(&i));
    printf("%d\n%d \n",sizeof(ptr),sizeof(i));
    return 0;
}