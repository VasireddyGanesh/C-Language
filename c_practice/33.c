#include<stdio.h>
int main()
{
    int a=0,i=0,b;
    for(i=0;i<5;i+=0.5)//since i is an integer it wont store values after decimal.
    {
        a++;
      //  printf("hello");  loop undergoes infinite times
        continue;
    }
    printf("%d",a);
    return 0;
}