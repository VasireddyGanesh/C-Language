//to search an element in an array using pointers
#include<stdio.h>
int main()
{
    int a[10],n,i;
    int *p1;
    p1=a;
    printf("Enter the elements of an array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",(p1+i));
    }
    printf("Enter an element to search \n");
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        if(*(p1+i)==n)
        {
            printf("the element is present at index %d",i);
        }
    }
    return 0;
}