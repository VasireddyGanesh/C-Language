#include<stdio.h>
int main()
{
    FILE* ptr;
    char str2[20],str1[20];
    int a;
    ptr=fopen("text.txt","r");
    if(ptr==NULL)
    {
        printf("File Opening failed\n");
    }
    else
    {
        fscanf(ptr,"%s %s %d",str2,str1,&a);
        printf("%s %d",str2,a);
        fclose(ptr);
    }
    return 0;
}