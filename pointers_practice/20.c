//to find the maximum in the array

#include<stdio.h>
#include<stdlib.h>
void read(int *a,int n);
int main()
{
    int *a,n,i,max;
    printf("Enter no.of elements\n");
    scanf("%d",&n);
    a=(int*)calloc(n,sizeof(int));
    printf("Enter the elements of the array\n");
    read(a,n);
    max=*a;
    for(i=0;i<n;i++)
    {
        if(*(a+i)>max)
        {
            max=*(a+i);
        }
    }
    printf("%d is the max\n",max);
    return 0;
}

void read(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
}