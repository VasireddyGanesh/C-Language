#include<stdio.h>
void rmvwl(char []);
int main()
{
    char ch[50];
    scanf("%[^\n]s",ch);
    rmvwl(ch);
    return 0;
}

void rmvwl(char ch[])
{
    int i,j;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' || ch[i]=='A' ||ch[i]=='e'||ch[i]=='E' || ch[i]=='i'|| ch[i]=='I' ||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U')
        {   
            for(j=i;ch[j]!='\0';j++)
           {
            ch[j]=ch[j+1];
           }
        }
    }
    printf("%s",ch);
}