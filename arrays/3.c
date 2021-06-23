//to rotate an 1D array by k times

#include<stdio.h>
int main()
{
    int i,j,n,k,m;
    printf("Enter no.of elements\n");
    scanf("%d",&n);
    printf("Enter no.of times\n");
    scanf("%d",&k);
    int a[n+k];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<k;j++)
  {
    for(i=(n-1);i>=0;--i)
    {
        a[i+1]=a[i];
    }
    i=0;
    a[i]=a[n];
  } 
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
} 