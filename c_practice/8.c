//to practice on input functions of character
#include<stdio.h>
#include<conio.h>
int main()
{
    char  a,b,c,d;
    a=getc(stdin);//it is present  in stdio and takes any kind of input stream
    fflush(stdin);
    printf("hello1\n");
    b=getchar();//present in stdio and takes standard input 
    printf("hello2\n");
    c=getch();//present in conio and shows output imediately (input character wont be shown)
    printf("hello3\n");
    d=getche();//present in conio and shows output imediately (input character will be shown)
    printf(" %c %c %c %c",a,b,c,d);
    return 0;
}