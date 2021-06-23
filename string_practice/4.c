//to count no.of words
#include<stdio.h>
int main()
{
    int count=1,i;
    char c[25];
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]==32)
        {
        count++;
        }
    }
    printf("%d is count \n",count);
    return 0;
}