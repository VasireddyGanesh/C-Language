#include<stdio.h>
int main(int argc,char* argv[])
{
    FILE* ptr1,*ptr2;
    int ch;
    ptr1=fopen(argv[1],"r");
    ptr2=fopen(argv[2],"w");
    if(ptr1==NULL || ptr2==NULL)
    {
        printf("File Copying failed\n");
        return 0;
    }
    printf("Copying\n");
    while((ch=fgetc(ptr1))!=EOF)
    {
        fputc(ch,ptr2);
    }
    printf("Successfully Copied\n");
    return 0;
}