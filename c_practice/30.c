//without main() function
//command used to execute is gcc filename -nostartfiles
#include<stdio.h>
#include<stdlib.h>

int nomain();

void _start()//generally will be added to every c source file at compilation process which calls main() function
{
    nomain();
    exit(0);//exit present in stdlib header file
}

int nomain()
{
    printf("geeksforgeeks");
    return 0;
}