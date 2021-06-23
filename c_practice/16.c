//to check given matrix is  identity matrix or not
#include<stdio.h>
void read(int a[10][10],int r,int c);
void print(int a[10][10],int r,int c);
int main()
{
    int a[10][10],r1,c1,i,j,result=0;
    printf("Enter no.of rows and columns of a matrix \n");
    scanf("%d %d",&r1,&c1);
    printf("Enter elements of a matrix \n");
    read(a,r1,c1);
    if(r1==c1)
    {
     for(i=0;i<r1;i++)
     {
     for(j=0;j<c1;j++)
     {
        if(i!=j)
        {
            if(a[i][j]==0)
            {
                result++;
            }
        }
        if(i==j)
        {
            if(a[i][j]==1)
            {
                result++;
            }
        }
      }
     }    
        if(result==(r1*c1))
        {
             printf("It is an identity matrix \n");
        }
         else
        {
             printf("It is not an identity matrix \n");
        }  
    }
    else   
     {
         printf("It should be a square matrix \n");
     }
     print(a,r1,c1);
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

void print(int a[10][10],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
      for(j=0;j<c;j++)
      {
          printf("%d ",a[i][j]);
      }
      printf("\n");
  }
}