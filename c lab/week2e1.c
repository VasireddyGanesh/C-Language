#include<stdio.h>
int main()
{
 float a,b,c,d;
 printf("Enter three integer values \n");
 scanf("%f %f %f",&a,&b,&c);
 d=a>b&&a>c?a:b>c?b:c;
 printf("The greatest of the three numbers is %f\n",d);
 return 0;
}