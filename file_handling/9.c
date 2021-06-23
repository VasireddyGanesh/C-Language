#include<stdio.h>
int main()
{
    char ch;
    int countspaces=0,countwords=1;
    FILE* ptr;
    ptr=fopen("textsample2.txt","r");
    if(ptr==NULL)
    {
        printf("could not open file\n");
        return 0;
    }
    while((ch=fgetc(ptr))!=EOF)
    {
        if(ch==32 ||ch=='\t')
        {
        countspaces++;
        }
        if(ch==32 ||ch=='\t'||ch=='\n'||ch=='\0')
        {
            countwords++;
        }
    }
    printf("No of words: %d\nNo of spaces: %d\n",countwords,countspaces);
    return 0;
}