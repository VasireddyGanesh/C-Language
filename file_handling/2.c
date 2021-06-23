#include<stdio.h>
int main(int argc,char* argv[])
{
    FILE *ptr;
    char ch;
    ptr=fopen(argv[1],"r");
    if(ptr!=NULL)
    {
        while((ch=fgetc(ptr))!=EOF)//fgetc returns ascii of the character
        {
            printf("%c",ch);
        }
    }
    else
    { 
        printf("not opened\n");
    }
    return 0;
}