//sorting of strings in ascending order
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[20];
    int n,i,j;
    char c,temp;
    gets(ch);
    n=strlen(ch);
    for(i=0;i<n;i++)
    {
        c=ch[i];
        for(j=i;j<n;j++)
        {
            if(c>ch[j])
            {
                temp=c;
               ch[i]=ch[j];
               ch[j]=c;
               c=ch[i]; 
            }
        }
    }
    printf("%s",ch);
    return 0;
}