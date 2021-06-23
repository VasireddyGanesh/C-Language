//To check whether given integer is prime or not
#include<stdio.h>
int main()
{
 int a,count,i;
 printf("Enter an integer value to check prime or not \n");
 scanf("%d",&a);
 count=0;
 if(a<0)
 {
     printf("Please enter valid integer \n");
 }
 else
 {
 if(a==1)
 {
    goto label;
 }
 else
 {
 for(i=1;i<=a;i++)
 {
        if(a%i==0)
        {
            count++;
        }
 }
 if(count==2)
 {
   label:  printf("Entered integer is prime \n");
 }
 else
 {
     printf("Entered integer is not prime \n");
 }
 }
 }
 return 0;
}  