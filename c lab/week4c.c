#include<stdio.h>
#include<math.h>
int main()
{
int a,k,count,i,j,sum;
printf("Enter an integer value \n");
scanf("%d",&a);
count=0;
sum=0;
k=a;
j=a;
for(;a>0;)
{
a=a/10;
count++;
}
 for(;k>0;)
  {
   i=k%10;
   sum=pow(i,count) + sum;
   k=k/10;
  }
if(j==sum)
{
   printf("sum of individual digits raised to power of %d is %d \n",count,sum);
   printf("%d is an Armstrong number \n",sum);
}
else
printf("it is not an armstrong number");
return 0;
}