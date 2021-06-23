#include<stdio.h>
int main()
{
 char a;
 printf("Enter a character \n");
 scanf("%c",&a);
 if((a>=65 && a<=90) || (a>=97 && a<=122))
  {
      if(a>=65 && a<=90)
    {
     a=a+32;
     printf("Lower case is %c",a);
    }
    else
    {
    a=a-32;
    printf("Upper case is %c",a);
    }
  }
 else
  {
    printf("Not an alphabet!!!");
  }
 return 0;
}