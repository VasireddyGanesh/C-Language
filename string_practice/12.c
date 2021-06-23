#include<stdio.h>
#include<string.h>
int STRLEN(char []);
int STRCMP(char [],char []);
int main()
{
    char str1[25],str2[25];
    printf("Enter the 1st string\n");
    gets(str1);
    printf("Enter the 2nd string\n");
    gets(str2);
    printf("On comparison of two strings we get %d\n",STRCMP(str1,str2));
    return 0;
}


int STRCMP(char str1[],char str2[])
{
    int n,m,k,i,j=0;
    n=STRLEN(str1);
    m=STRLEN(str2);
    k=m>n ? m:n;
    for(i=0;i<k;i++)
    {
        if(str1[i]<str2[i])
        {
            return -1;
        }
        if(str1[i]>str2[i])
        {
            return 1;
        }
        if(str1[i]==str2[i])
        {
            j++;
            continue;
        } 
    }
    if(j==m)
    {
        return 0;
    }
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