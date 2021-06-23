//LOWER LETTERS TO UPPER LETTERS AND UPPER TO LOWER USING POINTERS 


#include<stdio.h>
void STRLWR(char*);
int main()
{
 char a[20],*b;
 scanf("%[^\n]s",a);
 b=a;
 STRLWR(b);
 return 0;
}


void STRLWR(char *a)
{
    int i;
    for(i=0;*(a+i)!='\0';i++)
    {
        if(*(a+i)<=90 && *(a+i)>=65)
        {
            *(a+i)=*(a+i)+32;
        }
        else if(*(a+i)>=97 && *(a+i)<=122)
        {
            *(a+i)=*(a+i)-32;
        }
    }
    printf("%s",a);
}