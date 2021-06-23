//To check whether a given number is armstrong or not
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,d,count,sum,i;
    printf("Enter an integer which you want to check \n");
    scanf("%d",&a);
    b=a;
    d=a;
    count =0;
    sum =0;
    for(;a>0;)
    {
        a=a/10;
        count++;
    }
    for(;b>0;)
    {   
        a=b%10;
        sum=sum+pow(a,count);
        b=b/10;
    }
    if(sum==d)
    {
     printf("Entered integer is an Armstrong number ");
    }
    else
    {
     printf("Entered integer is not an armstrong number");    
    }
    return 0;
}