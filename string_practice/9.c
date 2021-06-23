#include<stdio.h>
#include<string.h>
int STRLEN(char[]);
int main()
{
    char ch[20];
    printf("enter the string\n");
    gets(ch);
    int n=STRLEN(ch);
    printf("Length of the given string is %d",n);
    return 0;
}

int STRLEN(char ch[])
{
    int i,n=0;
    for(i=0;ch[i]!='\0';i++)
    { 
        n++;
    }
    return n;
}