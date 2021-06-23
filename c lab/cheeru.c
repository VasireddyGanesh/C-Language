//prime numbers between two given numbers
#include<stdio.h>
int main() 
{ 
int a,b,i,j,count; 
scanf("%d%d",&a,&b);
for(j=a;j<=b;j++)
{ 
    count=0;
    for(i=1;i*i<=j;i++)
        { 
              if(j%i==0) 
              count++;
        }

        if(count==2) 
         printf("%d ",j);

}
       return 0;
}
