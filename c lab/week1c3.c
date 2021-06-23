#include<stdio.h>
int main()
{
 char a,b;
 int c;
   scanf("%c %c",&a,&b);
   fflush(stdin);
   c=a+b;
   printf("the addition is %d \n",c);
   printf("the difference is %d \n",a-b);
   printf("the product is %d \n",a*b);
   printf("the quotient is %d \n",a/b);
   printf("modulo operator cannot be applied to floating values\n");
   return 0; 
}