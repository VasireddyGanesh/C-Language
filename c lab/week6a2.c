#include<stdio.h>
int main()
{ 
  int i,n;
  scanf("%d",&n);  
  int a[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("The elements in the array are ");
  for(i=0;i<n;i++)
  {
   printf("%d\t",a[i]);
  } 
  printf("\n"); 
 return 0;
}