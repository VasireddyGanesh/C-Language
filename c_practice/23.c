#include<stdio.h>
void pattern(int n)
{
    int i,a=1;
    for(i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter no.of of rows \n");
    scanf("%d",&n);
    pattern(n);
    return 0;
}