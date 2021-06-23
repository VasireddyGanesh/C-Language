//To print the sum of cosx expansion
#include<stdio.h>
#include"week5.h"
#include<math.h>
int main()
{
    long int x,n,c,i,e,f;
    float g,a,b,sum;
    printf("Enter the value of x \n");
    scanf("%d",&x);
    printf("Enter the value of n \n");
    scanf("%d",&n);
    sum=0;
    for(i=0;i<n;i++)
    {
    c=2*i;
    f=pow(-1,i);
    e=pow(x,c);
    a=e*f;
    b=factorial(c);
    g=a/b;
    printf("%f",g);
    sum=sum+g;
    }
    printf("The sum is %f \n",sum);
    return 0;
}