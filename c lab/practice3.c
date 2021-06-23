#include<stdio.h>
int main()
{
 int i,j,max,k;
 scanf("%d %d",&i,&j);
 if(i>j)
     max=i;
 else
     max=j;
 for(k=max;k>=1;k--)
     {
        if(i%k==0 && j%k==0)
        {
         printf("%d",k);
         break; 
        }
      }
 return 0;
 }