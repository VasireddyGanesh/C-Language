#include<stdio.h>
int main()
{
    char a[10];
    printf("Enter the string \n");
    scanf("%[^\n]s",a);//reads until new line is encountered ...same as gets function
    printf("%s",a);
    return 0;
}