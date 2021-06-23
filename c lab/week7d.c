#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char str1[50],str2[50];
    int i,sum=0,l1,l2,m,n,a=0,b;
    printf("Enter two strings to add \n");
    scanf("%s %s",str1,str2);
    l1=strlen(str1);
    l2=strlen(str2);
    m=l1-1;
    for(i=0;i<l1;i++)
    {
        if((str1[i]>48) && (str1[i]<57))
        {
            goto label1;
        }
        else
        {
             printf("Enter correct input \n");
             goto label2;
        }
    }
   label1: for(i=0;i<l1;i++)
       {
        sum=sum+((str1[i]-48)*(pow(10,m)));
        m--;
       }
    a=sum;
    m=l2-1;
    sum=0;
    for(i=0;i<l2;i++)
    {
        sum=sum+((str2[i]-48)*(pow(10,m)));
        m--;
    }
    b=sum;
    printf("The sum of two given strings %d and %d is %d \n",a,b,a+b);
  label2:  return 0;
}