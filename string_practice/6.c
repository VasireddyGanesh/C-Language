//to count no.of small,capital,digits and symbols
#include<stdio.h>
#include<string.h>
int main()
{
    char a[15];
    int i,ccount=0,pcount=0,scount=0,dcount=0;
    printf("Enter the string \n");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            scount++;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            ccount++;
        }
        else if(a[i]>=48 && a[i]<=57)
        {
            dcount++;
        }
        else
        {
            pcount++;
        }
    }
    printf("small letters - %d,capital -%d,digits-%d,symbols -%d\n",ccount,scount,dcount,pcount);
    return 0;
}
