#include<stdio.h>
int main()
{
    char ch;
    int countlines=0;
    FILE* ptr;
    ptr=fopen("textsample2.txt","r");
    if(ptr==NULL)
    {
        printf("could not open file\n");
        return 0;
    }
    while((ch=fgetc(ptr))!=EOF)
    {
        if(ch=='\n')
        {
            countlines++;
        }
    }
    countlines++;
    printf("No of lines: %d\n",countlines);
    return 0;
}