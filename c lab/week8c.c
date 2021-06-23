#include<stdio.h>
int STRLEN(char[]);
void STRCPY(char [],char []);
int main()
{
    char str1[25],str2[25];
    printf("Enter the first string\n");
    gets(str1);
    printf("Enter the second string\n");
    gets(str2);
    STRCPY(str1,str2);
    printf("After copying string 2 into string 1 is %s",str1);
    return 0;
}


void STRCPY(char str1[],char str2[])
{
    int j;
    for(j=0;str2[j]!='\0';j++)
    {
        str1[j]=str2[j];
    }
    str1[j]='\0';
}