//Program to print odd numbers from 1 to n
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter range of odd numbers \n");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
    
        }
        i++;
    }
    return 0;
}