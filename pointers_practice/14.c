#include<stdio.h>
void add(int* ,int*);
int main(void)
{
    int a,b;
    printf("Enter the values of a and b \n");
    scanf("%d %d",&a,&b);
    add(&a,&b);
    printf("%d is Sum \n",a);
    return 0;
}

void add(int *ptr1,int *ptr2)
{
    *ptr1=*ptr1+*ptr2;
}