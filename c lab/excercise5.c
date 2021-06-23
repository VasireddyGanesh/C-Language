//express a number as sum of two prime numbers
#include<stdio.h>
int prime(int);
int main()
{
    int i,j,b,count,n;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
     {
        count=0;
        for(i=1;i<=j;i++)
        {
            if(j%i==0)
            count++;

        } 
        if(count==2)
        {
            b=n-j;
            if(b==prime(b))
            {
            printf("%d %d",j,b);
            return 0;
            }
        }    
     }
  return 0;
}

int prime(int n)
 {
     int i,count;
    count=0;
 if(n<0)
     printf("Invalid input number \n ");
 else
 {
    for(i=1;i<=n;i++)
 {
  if(n%i==0)
  {
   count=count+1;   
  }
 }
    if(count==2)
 {
    return n;
 }
 else
 {
  return 0;
 }
 }
 }
