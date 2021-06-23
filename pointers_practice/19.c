#include<stdio.h>
void print(int*,int,int);
void read(int*,int,int);
int main()
{
    int a[3][3],b[3][3],c[3][3],sum=0,i,j,t,m=0,n=0,res=0;
    printf("Enter the elements \n");
    read(&a[0][0],3,3);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(t=0;t<3;t++)
            {
                sum=sum+(a[i][t]*a[t][j]);
            }
            b[m][n]=sum;
            n++;
            sum=0;
        
        }
        m++;
        n=0;
    }
    printf("enter the elements of an identity matrix \n");
    read(&c[0][0],3,3);
    print(&b[0][0],3,3);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(c[i][j]==b[i][j])
            {
                res++;
            }
        }
    }
    if(res==9)
    {
        printf("It is an inverse matrix \n");
    }
    else
    {
        printf("It is not an inverse matrix \n");
    }
    return 0;
}

void read(int *ptr1,int n,int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",(ptr1));
            ptr1++;
        }
    }
}

void print(int *ptr2,int n, int m)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",*(ptr2));
            ptr2++;
        }
        printf("\n");
    }
}