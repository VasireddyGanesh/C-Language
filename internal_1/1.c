//To check whether given year is leap year or not 
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to check \n");
    scanf("%d",&year);
    if(year<0)
    {
        printf("Please Enter valid year \n");
    }
    else if(year%4==0)
        {
            if(year%100==0)
            {
                if(year%400==0)
                {
                 label1:   printf("Entered year is a LEAP YEAR \n");
                }
                else
                {
                    goto label2;
                }

            }
            else
            {
                goto label1;
            }
        }
    else
    {
     label2:   printf("Entered year is not a LEAP YEAR \n");
    }    
    return 0;
}