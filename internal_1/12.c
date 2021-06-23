//To print grade of a student
#include<stdio.h>
int main()
{
    int mat,phy,che,eng,it,tel;
    float avg;
    printf("Enter marks of each subject \n");
    scanf("%d %d %d %d %d %d",&mat,&phy,&che,&eng,&it,&tel);
    if(mat <35 || phy<35 || it<35 || che<35 || eng<35 || tel<35 )
    {
        printf("You are failed \n");
    }
    else
    {
        avg=(mat+eng+tel+it+phy+che)/6;
        if(avg>=75)
        {
            printf("You got A grade \n");
        }
        else if(avg>=60 && avg<75)
        {
            printf("Yougot B grade \n");
        }
        else if (avg>=50 && avg<60)
        {
            printf("You got C grade \n");
        }
        else if(avg>=35 && avg<50)
        {
            printf("You got d grade \n");
        }
    }
    return 0;
}