#include<stdio.h>
int main()
{ 
    int i,j;
    i=(1,2,3);//associativity(precedance) of comma operator is from left to right
    j=1,2,3;// = operator has higher precedance than comma operator so it treats it as (j=1),2,3
    printf("%d\n",i);
    printf("%d\n",j);
    return 0; 
}