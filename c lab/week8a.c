#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50]="c programming is fun";
    char str2[50]="competetive programming is fun";
    printf("length of 1st string is %d\n",strlen(str1));
    printf("concantenation of two strings %s\n",strcat(str1,str2));
    printf("on comparison of two strings we get %d\n",strcmp(str1,str2));
    printf("coverting string 2 into upper case %s\n",strupr(str2));
    printf("coverting string 1 into lower case %s\n",strlwr(str1));
    printf("setting all characters of str1 into a %s\n",strset(str1,'a'));
    printf("first occurance of string2 in string 1 %s\n",strstr(str1,str2));
    printf("copying 2nd string into 1st string %s\n",strcpy(str1,str2));
    printf("reverse of string 1 is %s\n",strrev(str1));
    printf("comparing both strings by ignoring case %d",strcmpi(str1,str2));
    return 0;
}