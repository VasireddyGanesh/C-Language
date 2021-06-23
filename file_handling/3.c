#include<stdio.h>
int main()
{
    FILE *ptr1,*ptr2;
    int ch;
    char ch2;
    ptr1=fopen("text.txt","r++");
    ptr2=fopen("text2.txt","w++");
    if(ptr1!=NULL && ptr2!=NULL)
    {
        while((ch=fgetc(ptr1))!=EOF)
        {
            fputc(ch,ptr2);
        }
    }
    fclose(ptr2);
    ptr2=fopen("text2.txt","r++");
    while((ch2=fgetc(ptr2))!=EOF)
        {
            printf("%c",ch2);
        }
    return 0;
}