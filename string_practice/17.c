#include<stdio.h>
void palindrome(char []);
int STRLEN(char []);
int main(void)
{
   char ch[40];
   scanf("%[^\n]s",ch);
  // fgets(ch,40,stdin);
   palindrome(ch);
   return 0;
}

void palindrome(char ch[])
{
    int i,m,n,j=0;
    n=STRLEN(ch);
    n=n-1;
    m=n;
    for(i=0;i<3;i++)
    {
        if(ch[i]==32)
        {
            goto l1;
        }
    }
    for(i=0;i<=n;i++)
    {  
          if(ch[i]==ch[n])
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
          l1: printf("Not Palindrome\n");
        }
}

int STRLEN(char ch[])
{
    int i,n=0;
    for(i=0;ch[i]!='\0';i++)
    { 
        n++;
    }
    return n;
}