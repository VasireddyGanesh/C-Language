//string to ascii conversion
#include<stdio.h>
int main()
{
    char a[15];
    int i;
    printf("Enter a string \n");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}