#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
    FILE *ptr;
    char* ch=argv[2];
    int n=atoi(ch);
    ptr=fopen(argv[1],"r");
    if(fseek(ptr,-n,SEEK_END)!=0)
    {
        printf("File pointer repositioning error\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        char ch=fgetc(ptr);
        printf("%c",ch);
    }
  return 0;
}