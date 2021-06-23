//To print even numbers in between m and n 
#include<stdio.h>
int main()
{
    int m,n,i,sum=0;
    printf("Enter the range of numbers \n");
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("sum of even numbers is %d \n",sum);
    return 0;
}