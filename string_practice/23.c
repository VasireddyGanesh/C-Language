//reverse the string
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str1[50];
    gets(str1);
    for(i=(strlen(str1)-1);str1[i]>=0;--i)
    {
        printf("%c",str1[i]);
    }
    return  0;
}