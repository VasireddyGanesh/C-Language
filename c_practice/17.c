//to find the trace of a matrix
#include<stdio.h>
void read(int a[10][10],int r,int c);
int main()
{
    int a[10][10],r1,c1,i,j,sum=0;
    printf("Enter no.of rows and columns of a matrix \n");
    scanf("%d %d",&r1,&c1);
    printf("Enter the elements of the matrix \n");
    read(a,r1,c1);
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("Trace of the matrix is %d \n",sum);
    return 0;
}

void read(int a[10][10],int r,int c)
{
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}