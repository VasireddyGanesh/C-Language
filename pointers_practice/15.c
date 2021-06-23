#include<stdio.h>
int max(int*,int*);
int main(void)
{
    int a,b,c;
    printf("Enter the values of a and b \n");
    scanf("%d %d",&a,&b);
    c=max(&a,&b);
    printf("%d is maximum \n",c);
    return 0;
}

int max(int *ptr1,int *ptr2)
{
    if(*ptr1>*ptr2)
    {
        return *ptr1;
    }
    else
    {
        return *ptr2;
    }
}