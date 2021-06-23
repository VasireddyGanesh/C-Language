#include<stdio.h>
int ADD(char [],char []);
void SUB(char [],char [],int ,int );
int STRLEN(char []);
int i,k,a,ch3[20],ch4[20],sum1=0,sum2=0;
int main()
{
    char ch1[20],ch2[20];
    scanf("%s %s",ch1,ch2);
    ADD(ch1,ch2);
    return 0;
}

int ADD(char ch1[],char ch2[])
{
    int j,m;
    j=STRLEN(ch1);
    m=STRLEN(ch2);
    if(ch1[0]==45 && ch2[0]==45)
    {
            for(i=0;i<(j-1);i++)
            {
                ch1[i]=ch1[i+1];
            }
            j=j-1;
            ch1[i]='\0';
            for(i=0;i<(m-1);i++)
            {
                ch2[i]=ch2[i+1];
            }
            m=m-1;
            ch2[i]='\0';
            SUB(ch1,ch2,j,m);
            printf("-%d",sum1+sum2);
            return 0;
    }
    if(ch1[0]==45 || ch2[0]==45)
    {
            if(ch1[0]==45)
            {
               for(i=0;i<j;i++)
            {
                ch1[i]=ch1[i+1];
            }
              j=j-1; 
              SUB(ch2,ch1,m,j);
              printf("%d",sum1-sum2); 
              return 0;
            }
            else if(ch2[0]==45)
            {
              for(i=0;i<j;i++)
            {
                ch2[i]=ch2[i+1];
            } 
            m=m-1; 
            SUB(ch1,ch2,j,m);
            printf("%d",sum1-sum2);
            return 0; 
            }
    }
    for(i=0;ch1[i]!='\0';i++)
    {
        if(ch1[i]<48 || ch1[i]>=58)
        {
            printf("Invalid Input");
            return 0 ;
        }
    }
    for(i=0;ch2[i]!='\0';i++)
    {
        if(ch2[i]<48 || ch2[i]>=58)
        {
            printf("Invalid Input");
            return 0 ;
        }
    }
    SUB(ch1,ch2,j,m);
    printf("%d",sum1+sum2);
    return 0;
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
void SUB(char ch1[],char ch2[],int j,int m)
{
  for(i=0;ch1[i]!='\0';i++)
    {
      ch3[i]=ch1[i]-48;  
    }
    for(i=0;ch2[i]!='\0';i++)
    {
        ch4[i]=ch2[i]-48;
    }
    a=j-1;
    for(k=0;k<j;k++)
    {
     for(i=0;i<(a);i++)
     {
         ch3[k]=ch3[k]*10;
     }
       sum1=sum1+ch3[k];
       a--;
    }
    a=m-1;
    for(k=0;k<m;k++)
    {
        for(i=0;i<a;i++)
        {
            ch4[k]=ch4[k]*10;
        }
        sum2=sum2+ch4[k];
        a--;
    }
}