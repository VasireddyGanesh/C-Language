#include<stdio.h>
void STRREV(char []);
int STRLEN(char []);
int main()
{
    char str1[25];
    printf("Enter the string 1\n");
    gets(str1);
    STRREV(str1);
    printf("After reversing the string we get %s",str1);
    return 0;
}

void STRREV(char str1[])
{
    int i;
    char temp;
    int n=STRLEN(str1);
    int m=n-1;
    for(i=0;i<n/2;i++)
    {
        if(n%2==0)
        {
            temp=str1[m];
            str1[m]=str1[i];
            str1[i]=temp;
            m--;
        }
       else if(i<n/2)
        {
           temp=str1[m];
            str1[m]=str1[i];
            str1[i]=temp; 
            m--;
        }
    }
    str1[n]='\0';
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