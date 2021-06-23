//To find the smallest of three numbers
#include<stdio.h>
int main()
{
    int a,b,c,small;
    printf("Enter three integer values \n");
    scanf("%d %d %d",&a,&b,&c);
    small= a<b?(a<c?a:c):(b<c?b:c );
    printf("Smallest of three numbers is %d",small);
    return 0;
}