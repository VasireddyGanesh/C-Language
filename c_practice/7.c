//deletion of an element in an array by specfying index
#include<stdio.h>
int main()
{
    int a[30],n,i,b,m,j;
    printf("Enter no of elements \n");
    scanf("%d",&n);
    printf("Enter the index of deletion of an element \n");
    scanf("%d",&m);
    b=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=m;i<n;i++)
    {
        a[i]=a[m+1];
        m++;
    }
    for(i=0;i<b;i++)
    {
        printf("%d  ",a[i]);
    }
return 0;

}