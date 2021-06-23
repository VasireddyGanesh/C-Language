#include<stdio.h>
int main()
{
 int n,i,pos,neg,even,odd,sum; 
 scanf("%d",&n);
 int a[n];
 odd=0;
 even=0;
 sum=0;
 pos=0;
 neg=0;
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
     if(a[i]>0)
     {
      pos++;   
     }
     if(a[i]<0)
     {
       neg++;  
     }
     if(a[i]%2==0)
     {
         even++;
     }
     else
     {
         odd++;
     }
    sum=sum+a[i];  
 }
 printf("The positive numbers are %d \n",pos);
 printf("The negative numbers are %d \n",neg);
 printf("The odd numbers are %d \n",odd);
 printf("The even numbers are %d \n",even);
 for(i=0;i<n;i++)
 {
     if(a[i]==0)
     {
        printf("%d is neither positive nor negative \n",a[i]);
        break;
     }
 }
 printf("The sum is %d \n",sum);
 return 0;
}