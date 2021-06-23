#include<stdio.h>
int main()
{
 unsigned long long i,n,fact;
 fact=1;
 scanf("%llu",&n);
 for(i=1;i<=n;i++)
 {
  fact=fact*i;
 }
 printf("%llu",fact);
 return 0;
}