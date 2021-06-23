//To find the sum of individual digits of a positive integer
#include<stdio.h>
int main()
{
    int a,sum,i;
    printf("Enter a positive integer for which you want sum of indiviidual digits \n");
    scanf("%d",&a);
    sum=0;
    if(a<0)
    {
        printf("Please enter positive number \n");
    }
    else
    {
    for(;a>0;)
    {
        sum=(a%10)+sum;
        a=a/10;
    }
    printf("Sum of individual digits is %d \n",sum);
    return 0;
    }
}