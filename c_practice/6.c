//insertion of an element in an array
#include<stdio.h>
int main()
{
    int a[30],n,i,b,m,j;
    printf("Enter no of elements \n");
    scanf("%d",&n);
    printf("Enter the index of insertion of an element \n");
    scanf("%d",&m);
    printf("Enter the value to insert \n");
    scanf("%d",&j);
    b=n+1;
    printf("Enter the elements of an array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n+1;i>=m;i--)
    {
        a[i]=a[n];
        n--;
    }
    a[m]=j;
    for(i=0;i<b;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}