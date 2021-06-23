#include<stdio.h>
int main()
{
    int a=0.1,b=0.2;//here first 0.1 will be in double and the trancated to float and get assigned 
    if(a<0.1)
    {
        printf("possible\n");//while comparing a will be converted to double for better precision and then compared with o.1(this is double here)
    }
    if(b<0.2)
    {
        printf("not posssible");
    }
    return 0;//hence always these variables are smaller than those values 
}