#include<stdio.h>
int main()
{
    int i=0,j=10;
    printf("haii hello %c",j);//in place \n we can use its ascii value (10) to go to new line
    for(i=0;i<20;i++)
    {
        switch(i)//in case  of switch break statement is very important
        {
            case 0:
            i+=5;
            case 1:
            i+=2;
            case 5:
            i+=5;
            default:
            i+=4;
            break;
            printf("haii bro");
        }
        printf("hello ganesh %c",j);
    }
    printf("bye guys");

return 0;
}