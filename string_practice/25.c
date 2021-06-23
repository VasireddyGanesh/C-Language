// joins to all the words without having spaces
#include<stdio.h>
int main()
{
    int i;
    char str1[50];
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]==32)
        {
            continue;
        }
        printf("%c",str1[i]);
    }
    return 0;
}