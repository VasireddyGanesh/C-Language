#include<stdio.h>
struct car
    {
        int a;
    };

int main()
{
    struct car c1={1};
    struct car c2={2};

    if(c1==c2)//cannot compare two structure variables
    {
        printf("hello\n");
    }
    return 0;
}