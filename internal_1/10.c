//to print the gcd of two numbers 
#include<stdio.h>
int main()
{
    int a,b,i,min;
    printf("Enter two integer values \n");
    scanf("%d %d",&a,&b);
    if(a<b)
    {
        min=a;
    }
    else
    {
        min=b;
    }
    for(i=min;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            printf("Gcd is %d",i);
            break;
        }
    }
    return 0;
}