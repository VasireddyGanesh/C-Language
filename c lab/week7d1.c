#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str1[40],str2[40];
    int a,b;
    scanf("%s %s",str1,str2);
    printf("%d",atoi(str1)+atoi(str2));
    return 0;
}