#include<stdio.h>
#include<string.h>
int main(void)
{
    int i,j,n;
    char ch[30];
    char *ptr1;
    printf("Enter string\n");
    scanf("%[^\n]s",ch);
    ptr1=ch;
    for(j=0;(*(ptr1+i+1)<48 && *(ptr1+i+1)>57);j++)
    {
        printf("%c",*(ptr1+j));
    }
    for(i=0;*(ptr1+i)!='\0';i++)
    {
        if(*(ptr1+i)==32)
        {
            if(*(ptr1+i+1)>=48 && *(ptr1+i+1)<=57)
            {   
                  
                n=*(ptr1+i+1)-48;
                switch(n)
                {
                    case 0:
                        printf(" zero ");
                         for(j=i;*(ptr1+j+3)!=32;j++)
                           {
                                printf("%c",*(ptr1+j+3));
                           }
                            if(*(ptr1+j+3)=='\0')
        {
            goto label;
        }
                        break;
                    case 1:
                        printf(" one ");
                         for(j=i;*(ptr1+j+3)!=32;j++)
                           {
                                printf("%c",*(ptr1+j+3));
                           }
                        break;
                    case 2:
                        printf(" two ");
                         for(j=i;*(ptr1+j+3)!=32 ;j++)
                           {
                                printf("%c",*(ptr1+j+3));
                           }
                        break;
                    case 3:
                        printf(" three ");
                         for(j=i;*(ptr1+j+3)!=32 ;j++)
                           {
                                printf("%c",*(ptr1+j+3));
                           }
                        break;
                    case 4:
                        printf(" four ");
                         for(j=i;*(ptr1+j+3)!=32 ;j++)
                           {
                                printf("%c",*(ptr1+j+3));
                           }
                        break;                
                    case 5:
                        printf(" five ");
                         for(j=i;*(ptr1+j+3)!=32 ;j++)
                           {                       
                                printf("%c",*(ptr1+j+3));
                           }
                        break;
                    case 6:
                        printf(" six ");
                            for(j=i;*(ptr1+j+3)!=32 ;j++)
                           {
                                printf("%c",*(ptr1+j+3));
                           }
                        break;
                    case 7:
                      { printf(" seven ");
                         for(j=i;*(ptr1+j+3)!=32 ;j++)
                           {
                                printf("%c",*(ptr1+j+3));
                           }
                        break;
                       } 
                    case 8:
                      { printf(" eight ");
                         for(j=i;*(ptr1+j+3)!=32 ;j++)
                         {                       
                             printf("%c",*(ptr1+j+3));
                         }
                        break;
                      }
                    case 9:
                      {  printf(" nine ");
                         for(j=i;*(ptr1+j+3)!=32 ;j++)
                         {
                            printf("%c",*(ptr1+j+3));
                         }
                        break;
                      }                 
                }
            }
        }
    }
    label: return 0;
}