#include<stdio.h>
int main()
{
    struct
    {
        int x;
        int y;
        char c;
    }x1,x2;
    x1.x=1;
    x1.y=2;
    x1.c='a';
    x2.x=3;
    x2.y=4;
    x2.c='b';
    printf("%d %d %c %d %d %c\n",x1.x,x1.y,x1.c,x2.x,x2.y,x2.c);
    scanf("%d %d %c",&x1.x,&x1.y,&x1.c);
    printf("%d %d %c\n",x1.x,x1.y,x1.c);
    return 0;
}