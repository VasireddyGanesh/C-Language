// To merge two arrays and sort the merged array(descending order)
#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5},b[5]={9,8,7,6,10},c[10],max[10],d=0,i,j,max1;
    for(i=0;i<10;i++)
    {
        if(i<5)
        {
        c[i]=a[i];
        }
        else
        {
            c[i]=b[d];
            d++;
        }

    }
    for(i=0;i<10;i++)
    {
        max1=c[i];
        for(j=i;j<10;j++)
        {
            if(max1<c[j])
            {   
                max1=c[j];
                max[i]=c[j];
                c[j]=c[i];
                c[i]=max[i];
            }
        }
        
    }
    printf("%d %d %d %d %d %d %d %d %d %d \n",c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7],c[8],c[9]);
}