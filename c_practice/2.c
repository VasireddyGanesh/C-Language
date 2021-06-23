//to print odd and even elements in two seperate arrays
#include<stdio.h>
int main()
{
    int arr[5],odd[5],even[5],i,n=0,m=0;
    printf("Enter elements \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        if(arr[i]%2==0)
        {
            odd[n]=arr[i];
            n++;
        }
        else
        {
            even[m]=arr[i];
            m++;
        }
    }
    printf("even elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",odd[i]);
    }
    printf("\nodd elements are \n");
    for(i=0;i<m;i++)
    {
        printf("%d ",even[i]);
    }
    return 0;
}