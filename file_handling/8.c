#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr;
    char str2[10];
    char str1[10]="hello";
    ptr=fopen("text.bin","wb+");
    fwrite(str1,sizeof(char),6,ptr);
    fseek(ptr,0,SEEK_SET);
    fread(str2,sizeof(char),6,ptr);
    printf("%s",str2);
    fclose(ptr);
    return 0;
}