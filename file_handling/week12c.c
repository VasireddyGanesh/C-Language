#include<stdio.h>
int main()
{
    char ch;
    int countchar=0,countwords=1,countlines=1;
    FILE* ptr;
    ptr=fopen("textsample2.txt","r");
    if(ptr==NULL)
    {
        printf("could not open file\n");
        return 0;
    }
    while((ch=fgetc(ptr))!=EOF)
    {
        if(ch==32 ||ch=='\t'||ch=='\n'||ch=='\0')
        {
        countwords++;
        }
        if(ch=='\n'|| ch=='\0'||ch==EOF)
        {
            countlines++;
        }
        countchar++;
    }
    printf("No of characters:%d\nNo of words: %d\nNo of lines: %d\n",countchar,countwords,countlines);
    return 0;
}