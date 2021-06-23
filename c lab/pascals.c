#include<stdio.h>
int fact(int);
int main()
{
 int i,j,n,b,k,a;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(k=(n-i);k>=1;k--)
  {
   printf(" ");
  }
  for(j=0;j<=i;j++)
  {
  b=fact(j)*fact(i-j);
  a=fact(i)/b;
  printf("%d ",a);
  }
  printf("\n");
 }
return 0;
}

int fact(int n)
{
 int i,fac;
 fac=1;
 if(n==0)
  return 1;
 else
 {
 for(i=1;i<=n;i++)
 {
  fac=fac*i;
 }
 return fac;
 }
}
