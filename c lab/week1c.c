#include<stdio.h>
int main()
{
 { 
   int a,b;
  scanf("%d %d",&a,&b);
  printf("the addition is %d\n",a+b);
  printf("the multipication is %d \n",a*b);
  printf("the remainder is %d \n",a%b);
  printf("the subtraction is %d \n",a-b);
  printf("the quotient is %d \n",a/b);
 }
 {
   float a,b;
   scanf("%f %f",&a,&b);
   printf("the addition is %.1f \n",a+b);
   printf("the difference is %.1f \n",a-b);
   printf("the product is %.2f \n",a*b);
   printf("the quotient is %.2f \n",a/b);
   printf("modulo operator cannot be applied to floating values\n");
 }
}