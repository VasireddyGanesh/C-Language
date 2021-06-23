#include<stdio.h> //searching of elements in an array
int main()
 {
     int array[8],i,j=0,n,a;
     scanf("%d",&n);
     scanf("%d",&a);
     for(i=0;i<n;i++)
     {
       scanf("%d",&array[i]);
     }
     for(i=0;i<n;i++)
     {
      if(array[i]==a)
      {
         printf("%d",j);
      }
      j++;
     }
return 0;
 }