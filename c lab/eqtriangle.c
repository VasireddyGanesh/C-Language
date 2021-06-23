//equalateral triangle pattern with numericals 
#include<stdio.h>
int main()
{
 int i,j,n,k,a;
 scanf("%d",&n);
 a=1;
 for(i=n;i>=1;--i)
  {
      for(k=i;k>=1;--k)
      {
          printf(" ");
      }
    for(j=i;j<=n;j++)
  {        
      printf("%d ",a);
      a++;
  }
  printf("\n");    
  }
  return 0;
}