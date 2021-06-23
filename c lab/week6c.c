#include<stdio.h>
int main()
{
    int n,i,max,small;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[1];
    small=a[1];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        if(a[i]<small)
        {
            small=a[i];
        }
    }
    printf("The smallest element is %d \n",small);
    printf("The biggest element element is %d \n",max);
 return 0;
}