#include<stdio.h>

struct car{
    int a;
    int b;
    char c;
     } c1;

int main()
{
    struct car c2;
    c1.a=1;
    c1.b=2;
    c1.c='a';
    scanf("%d %d %c",&c2.a,&c2.b,&c2.c);
    printf("%d %d %c %d %d %c",c1.a,c1.b,c1.c,c2.a,c2.b,c2.c);
}
      