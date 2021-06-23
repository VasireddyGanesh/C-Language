#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    int i,l,count=0,a;
    printf("Enter the string \n");
    gets(str1);
    l=strlen(str1);
    a=l;
    for(i=0;i<l;i++)
    {
        if(str1[i]==str1[l-1])
        {
            count++;
        }
        l--;
    }
    if(count==(a/2) || count>(a/2))
    {
        printf("The given string is palindrome \n");
    }
    else
    {
        printf("The given string is not palindrome \n");
    }
    return 0;
}