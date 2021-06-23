#include<stdio.h>
#include<string.h>
int main()
{
    char str1[3]={'B','e','g'};
    printf("length %d size %d \n",strlen(str1),sizeof(str1));//strlen function gives no.of characters and sizeof function gives memeory occupied in bytes
    return 0; 
}
