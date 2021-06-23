#include<stdio.h>
void read(int a[10][10] ,int,int);
void print(int c[10][10] ,int,int);
void sum(int a[10][10],int b[10][10],int,int);
void multi(int a[10][10],int b[10][10],int ,int ,int ,int );
void transpose(int d[10][10],int,int);
int c[10][10];
int d[10][10];
int e[10][10];
int main()
{
    int r1,r2,c1,c2,a[10][10],b[10][10];
    printf("Enter no.of rows and columns of 1st matrix \n");
    scanf("%d %d",&r1,&c1);
    printf("Enter elements of 1st matrix \n");
    read(a,r1,c1);
    printf("Enter no.of rows and columns of 2nd matrix \n");
    scanf("%d %d",&r2,&c2);
    printf("Enter elements of 2nd matrix \n");
    read(b,r2,c2);
    if(r1==r2  && c1==c2)
    {
        sum(a,b,r1,c1);
        print(c,r1,c1);
    }
    else
    {
        printf("Addition is not Possible\n");
    }
    if(c1==r2)
    {
        printf("Multiplication of matrices is \n");
        multi(a,b,r1,c2,c1,r2);
        print(d,r1,c2);
    }
    else
    {
        printf("Multiplication is not possible \n");
    }
    printf("The Transpose of First Matrix is \n");
    transpose(a,r1,c1);
    print(e,c1,r1);
    return 0;
} 
    void read(int a[10][10],int r1,int c1)
{
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
}
 void sum(int a[10][10],int b[10][10],int r1,int c1)
 {
     int i,j;
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             c[i][j]=a[i][j]+b[i][j];
         }
     }
 }
 void print(int c[10][10],int r1,int c1)
 {
     int i,j;
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c1;j++)
         {
             printf("%d ",c[i][j]);
         }
         printf("\n");
     }
 }
 void multi(int a[10][10],int b[10][10],int r1,int c2,int c1,int r2)
 {
     int i,j,g=0,h=0,k,sum=0,m=0,n=0;
     for(i=0;i<r1;i++)
     {
         for(k=0;k<c2;k++)
        {
         for(j=0;j<c1;j++)
         {
             sum=sum+a[i][j]*b[j][g];
         }
         d[m][k]=sum;
         sum=0;
         g++;
        } 
        g=0;
        m++;
     }
 }   
 void transpose(int d[10][10],int r1,int c2)
 {
     int i,j;
     for(i=0;i<c2;i++)
     {
         for(j=0;j<r1;j++)
         {
             e[i][j]=d[j][i];
         }
     }
 }
