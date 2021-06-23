#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    int l,i;
    printf("Enter  the string \n");
    gets(str1);
    l=strlen(str1);
    for(i=0;i<=l;i++)
    {
        if(str1[i]<=90 && str1[i]>=65)
        {
            str1[i]+=32;
        }
        else if(str1[i]>=97 && str1[i]<=123)
        {
            str1[i]-=32;
        }
    }
    printf("%s",str1);
    return 0;
}