//program to reverse a number
#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,i,sum=0,count=0;
    printf("Enter an integer value \n");
    scanf("%d",n);
    a=n;
    for(;n>0;)
    {
        n=n/10;
        count++;
    }
    for(i=1;i<=count;i++)
    {
        n=a%10;
        sum=sum+pow(n,2);
        a=a/10;
    }
    printf("%d",sum);
    return 0;
}