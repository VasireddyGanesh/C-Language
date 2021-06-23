//executing range of values in switch statement

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 10 ... 100 :
                    printf("hello\n");
                    break;
    }
    return 0;
}