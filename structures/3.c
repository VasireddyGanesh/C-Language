#include<stdio.h>

struct car{
    int a[2];
    int b;
};

int main()
{
    struct car c1[2]={1,2,c1[1].b=2};
    struct car *ptr=c1;
    printf("%d %d",(ptr+1)->b,ptr->a[1]);
    return 0;
}