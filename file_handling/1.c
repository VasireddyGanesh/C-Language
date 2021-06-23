#include<stdio.h>
int main()
{
    FILE *ptr;
    char ch[10]="world";
    ptr=fopen("text.txt","a");
    if(ptr==NULL)
    {
        printf("not opened \n");
    }
    else
    {
        fprintf(ptr,"%s",ch);
    }
    return 0;
}

