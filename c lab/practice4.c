#include<stdio.h>
int main()
{
 int i,n,sum;
 sum =0;
 scanf("%d",&n);
 for(i=1;i<n;i++)
  {
   if(n%i==0)
   sum =sum + i;
  }
  if(sum==n)
  printf("perfect");
  return 0;
  }