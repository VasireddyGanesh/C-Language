#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch;
    ptr=fopen("textsample1.txt","r");
    if(ptr==NULL)
    {
        printf("could not open file\n");
        return 0;
    }
    while((ch=fgetc(ptr))!=EOF)
    {
        printf("%c",ch);
    }
    return 0;
}