#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    int i,j,l,c=0;
    printf("Enter the string \n");
    gets(str1);
    l=strlen(str1);
    for(i=0;i<=l;i++)
    {
        if(str1[i]!='a'&& str1[i]!='e'&& str1[i]!='i'&&str1[i]!='o'&&str1[i]!='u'&&str1[i]!='A'&& str1[i]!='E'&&str1[i]!='I'&&str1[i]!='O'&&str1[i]!='U')
        {
            str1[c++]=str1[i];
        }
    }
    printf("%s",str1);
    return 0;
}