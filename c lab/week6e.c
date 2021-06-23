#include<stdio.h>
int main()
{
    int n,i,x;
    printf("Enter No.of Elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the list of Numbers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter The element to find in the List of numbers\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("Element found at Position %d\n",i+1);
            return 0;
        }
    }
    printf("NO");
    return 0;
}