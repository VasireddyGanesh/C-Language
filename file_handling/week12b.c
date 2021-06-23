#include<stdio.h>
int main()
{
    int ch;
    FILE* ptr1,*ptr2;
    ptr2=fopen("textsample2.txt","r");
    if(ptr2==NULL)
    {
        printf("could not open file\n");
        return 0;
    }
    ptr1=fopen("textsample1.txt","w");
    if(ptr1==NULL)
    {
        printf("could not open file\n");
        return 0;
    }
    while((ch=fgetc(ptr2))!=EOF)
    {
        fputc(ch,ptr1);
    }
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}