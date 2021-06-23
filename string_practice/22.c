//to count no.of characters and no.of words 
#include<stdio.h>
int main()
{
    int i,count1=0,count2=1;
    char str1[50];
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        count1++;
        if(str1[i]==32)
        {
            count2++;
        }
    }
    printf("no of characters is %d and words is %d",count1,count2);
    return 0;
}