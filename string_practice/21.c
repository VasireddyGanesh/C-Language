//CHECKING OF PALINDROME USING POINTERS

#include<stdio.h>
void palindrome(char *);
int STRLEN(char *);
int main(void)
{
   char ch[40],*ptr;
   scanf("%[^\n]s",ch);
   ptr=ch;
   palindrome(ptr);
   return 0;
}

void palindrome(char *ch)
{
    int i,m,n,j=0;
    n=STRLEN(ch);
    n=n-1;
    m=n;
    for(i=0;i<=n;i++)
    {  
          if(*(ch+i)==*(ch+n))
          {
           j++;
          }
          n--;
    }
        if(j==((m/2)+1))
        {
            printf("Palindrome\n");
        }
        else
        {
            printf("Not palindrome\n");
        }
}

int STRLEN(char *ch)
{
    int i,n=0;
    for(i=0;*(ch+i)!='\0';i++)
    { 
        n++;
    }
    return n;
}