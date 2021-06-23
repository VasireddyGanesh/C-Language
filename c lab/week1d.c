#include<stdio.h>
int main()
{
  float c,f;
  printf("enter temperature in celsius \n");
  scanf("%f",&c);
  f=c*9/5+32;
  printf("%f \n",f);
  printf("enter temperature in farenheit \n");
  scanf("%f",&f);
  c=(f-32)*5/9;
  printf("%f",c);
  return 0;
}