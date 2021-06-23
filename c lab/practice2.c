#include<stdio.h>
int main()
{
  int array[5],n,sum=0,i;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&array[i]);
  }
  for(i=0;i<n;i++)
  {
      sum=sum+array[i];
  }
printf("%d",sum);
return 0;
}