#include<stdio.h>
int main()
{
 int x,y,i;
 printf("Enter x,y and the integer value to be check respectively \n");
 scanf("%d %d %d",&x,&y,&i);
 if(x<0 && y<0 && i<0)
  { 
    if(i<x && i>y)
      printf("Key value is between the limits \n");
    else
      printf("key value is not between the limits \n");
  }   
 else
  {
    if(i>x && i<y)
     printf("Key value is  between the limits \n");
    else
      printf("key value is not between the limits \n");
  }   
 return 0;
}