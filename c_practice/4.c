//To sort an array in descending order
#include<stdio.h>
int main()
{
 int a[5]={2,3,1,4,5},max1,max[5],j,i;
    for(i=0;i<5;i++)
    {
        max1=a[i];
        for(j=i;j<5;j++)
        {
            if(max1<a[j])
            {   
                max1=a[j];
                max[i]=a[j];
                a[j]=a[i];
                a[i]=max[i];
            }
        }
        
    }
    printf("%d %d %d %d %d \n",a[0],a[1],a[2],a[3],a[4]);
    return 0;
}