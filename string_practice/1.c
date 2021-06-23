#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    printf("enter the input string \n");
    scanf("%s",a);//scanf reads input and leaves new line character in the buffer which is taken up by next gets function
    printf("%s",a);
    gets(a);
    printf("%s",a);
    return 0;
}