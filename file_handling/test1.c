#include<stdio.h>



void f1(char *s1,char *s2)
{
    char *t;
    t=s1;
    s1=s2;
    s2=t;
}
void f2(char **s1,char **s2)
{
    char *t;
    t=*s1;
    *s1=*s2;
    *s2=t;
}
void main()
{
    char *s1="HI",*s2="bye";
    f1(s1,s2);
    printf("%s %s",s1,s2);
    f2(&s1,&s2);
    printf("%s %s",s1,s2);
}