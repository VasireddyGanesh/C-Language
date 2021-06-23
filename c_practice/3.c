//To sort an array in ascending order
#include<stdio.h>
int main()
{
 int a[5]={5,2,3,1,4},min1,min[5],j,i;
    for(i=0;i<5;i++)
    {
        min1=a[i];
        for(j=i;j<5;j++)
        {
            if(min1>a[j])
            {   
                min1=a[j];
                min[i]=a[j];
                a[j]=a[i];
                a[i]=min[i];
            }
        }
        
    }
    printf("%d %d %d %d %d \n",a[0],a[1],a[2],a[3],a[4]);
    return 0;
}