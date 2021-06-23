#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    struct class
    {
        char name[20];
        int class;
        int age;
    };
    struct class s1;
    struct class s2;
    char ch2[50];
    printf("Enter the name of the student\n");
    scanf("%s",s1.name);
    printf("Enter class of the student\n");
    scanf("%d",&s1.class);
    printf("Enter age \n");
    scanf("%d",&s1.age);
    FILE *ptr;
    ptr=fopen("text3.txt","w++");
    fprintf(ptr,"name : %s \n",s1.name);
    fprintf(ptr,"class : %d \n",s1.class);
    fprintf(ptr,"age : %d \n",s1.age);
    fputs("the end",ptr);
    rewind(ptr);
    fgets(ch2,100,ptr);
    puts(ch2);
    return 0;
}