#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[10]="hello", b[10], c[10], d[10],e[3];
    printf("%s\n",strcpy(b,a));//strcpy returns the pointer to the first character of destination here it is first charcter of b
    //strcpy copies even the null character to the destination
    strcpy(c,strcpy(d,a));
    puts(c);// ends with new line character automatically
    puts(d);
    strncpy(e,a,3);//since strcpy doesnt check the sizes it is not good to use it hence strncpy is used. but  strncpy doesnt add null charcter at the end.
    e[2]='\0';//user should add the null character
    printf("%s",e);
    return 0;
}