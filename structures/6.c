#include<stdio.h>
struct student
{
    char *name;
    int age;
};

int main()
{
    struct student s2;
    struct student* s1=&s2;
    s1->name="ganesh";
    printf("%s",s1->name);
    return 0;
}