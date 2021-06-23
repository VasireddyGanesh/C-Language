#include<stdio.h>
#include<string.h>
int STRLEN(char []);
char* STRCAT(char [],char []);
int main()
{
    char str1[100],str2[50];
    printf("Enter 1st string \n");
    gets(str1);
    printf("Enter 2nd string \n");
    gets(str2);
    printf("%s\n",STRCAT(str1,str2));
    return 0;
}

char* STRCAT(char str1[],char str2[])
{
    int i,n,j=0;
    n=STRLEN(str1);
    for(i=n;str2[j]!='\0';i++)
    {
        str1[i]=str2[j];
        j++;
    }
    str1[n+j]='\0';
    return str1;
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