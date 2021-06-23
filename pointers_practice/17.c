#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1,n,i;
    printf("Enter no.of elements \n");
    scanf("%d",&n);
    ptr1=(int*)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr1+i));
    }
    printf("The elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(ptr1+i));
    }
 return 0;
}