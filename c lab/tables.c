//number tables
#include<stdio.h>
int main()
{
  int n,i,prod;
 scanf("%d",&n);
 for(i=1;i<=10;i++)
 {
  prod=n*i;
  printf("%d * %d = %d \n",n,i,prod);
 }
return 0;
}