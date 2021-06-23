//To check whether a given number is perfect or not
#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter an integer to check \n");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        printf("given integer is perfect number \n");
    }
    else
    {
        printf("given integer is not a perfect number \n");
    }
    return 0;
}