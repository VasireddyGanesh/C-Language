//to count no.of characters without using string library functions
#include<stdio.h>
#include<string.h>
int main()
{
    int r;
    printf("no.of characters espected \n");
    scanf("%d",&r);
    fflush(stdin);
    char a[r];
    int count=0,i;
    printf("Enter the string \n");
    gets(a);
    for(i=0;i<r;i++)
    {
        if(a[i]!='\0')
        {
            count++;
        }
        if(a[i]=='\0')
        {
            goto label;
        }
    }
   label: printf("no.of characters is %d \n",count);
    return 0;
}
