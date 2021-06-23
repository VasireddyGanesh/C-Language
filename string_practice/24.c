//to count no.of vowels

#include<stdio.h>
int main()
{
    int i,count=0;
    char ch[50];
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' || ch[i]=='A' ||ch[i]=='e'||ch[i]=='E' || ch[i]=='i'|| ch[i]=='I' ||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U')
        {
            printf("%c",ch[i]);
            count++;
        }
    }
    printf("\nno.of vowels is %d",count);
    return 0;
}