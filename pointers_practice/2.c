//program to perform all arthematic operstions on pointers
#include<stdio.h>
int main()
{
    int a,b;
    int* p1,*p2;
    p1=&a;
    p2=&b;
    printf("Enter values of a and b \n");
    scanf("%d %d",p1,p2);
    printf("Addition of a and b is %d \n",*p1+*p2);
    printf("subtraction is %d \n",*p1-*p2);
    printf("multiplication is %d \n",*p1**p2);
    printf("division is %d \n",*p2/ *p1);
    printf("%d",p2-p1);
    return 0;
}