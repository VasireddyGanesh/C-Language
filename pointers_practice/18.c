#include<stdio.h>
int main()
{
    int i,n=0;
    char *ptr1,a[20];
    ptr1=a;
    printf("Input the string \n");
    gets(a);
    for(i=0;*(ptr1+i)!=0;i++)
    {
        n++;
    }
    printf("%d",n);
return 0;
}