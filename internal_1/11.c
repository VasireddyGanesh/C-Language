//to print sum of squares of the digits of a number
#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum,a,i;
    printf("Enter an integer value \n");
    scanf("%d",&n);
    sum=0;
    for(i=1;n>0;i++)
    {
        a=n%10;
        sum=sum+pow(a,2);
        n=n/10;
    }
    printf("Sum is %d \n",sum);
    return 0;
}