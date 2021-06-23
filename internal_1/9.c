//to print numbers from n to 1
#include<stdio.h>
int recursive(int);
int main()
{
 int n;
 printf("Enter an integer value \n");
 scanf("%d",&n);
 recursive(n);
 return 0;
}

int recursive(int n)
{   if(n==0)
    {
        return 0;
    }
    else
    {
    printf("%d ",n);
    recursive(n-1);
    }
}