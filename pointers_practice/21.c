//to swap three numbers in clockwise using pointers

#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b,int *c);
int main()
{
    int a,b,c;
    printf("Enter the values of a b and c\n");
    scanf("%d %d %d",&a,&b,&c);
    swap(&a,&b,&c);
    printf("a %d b %d c %d",a,b,c);
    return 0;
}

void swap(int *a,int *b,int *c)
{
     *a=*a+*b+*c;
     *b=*a-*b-*c;
     *c=*a-*b-*c;
     *a=*a-*b-*c;
}