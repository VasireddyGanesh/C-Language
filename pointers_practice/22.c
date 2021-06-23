//to do all arthematic operations on matrices

#include<stdio.h>
#include<stdlib.h>
void read(int* ,int,int);
void print(int* ,int,int);
int* add(int*,int*,int*,int ,int);
int* subtract(int*,int*,int*,int ,int);
int* multiply(int**,int**,int*,int ,int);
int main(void)
{ 
    int *a,*b,*c,r1,c1,r2,c2,**a1,**b1,i,j;
    printf("Enter the order of a matrix a\n");
    scanf("%d %d",&r1,&c1);
    a=(int*)calloc(r1*c1,sizeof(int));
    printf("Enter the elements of matrix 'a' \n");
    read(a,r1,c1);
    printf("Enter the order of a matrix b\n");
    scanf("%d %d",&r2,&c2);
    b=(int*)calloc(r2*c2,sizeof(int));
    printf("Enter the elements of matrix b \n");
    read(b,r2,c2);
    c=(int*)calloc(r1*c1,sizeof(int));
    if(r1==r2 && c1==c2)
    {
        printf("addition of two matrices \n");
        add(a,b,c,r1,c1);
        print(c,r1,c1);
        printf("subtraction of two matrices a and b is \n");
        subtract(a,b,c,r1,c1);
        print(c,r1,c1);

    }
    else
    {
        printf("addition is not possible \n");
        printf("subtraction is not possible\n");
    }   
    if(c1==r2)   
    {
      printf("multiplication of the two matrices is\n");
      a1=(int **)calloc(r1,sizeof(int*));
      for(i=0;i<r1;i++)
      {
           a1[i]=(int *)calloc(c1,sizeof(int));
      }    
    b1=(int **)calloc(r2,sizeof(int*));
    for(i=0;i<r1;i++)
       {
         b1[i]=(int *)calloc(c2,sizeof(int));
       } 
    printf("enter elements of matrix a\n");
    for(i=0;i<r1;i++)
    {
    for(j=0;j<c1;j++)
        {
            scanf("%d",(*(a1+i)+j));
        }
    }
    printf("enter elements of b matrix \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b1[i][j]);
        }
    }
    multiply(a1,b1,c,r1,c2);
    print(c,r1,c2);
    }
    else
    {
        printf("multiplication is not possible \n");
    }
    return 0 ; 
}


void read(int *a,int r1,int c1)
{
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",a++);
        }
    }
}

void print(int *a,int r1,int c1)
{
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",*a);
            ++a;
        }
        printf("\n");
    }
}

int* add(int *a,int *b,int *c,int r1,int c1)
{
    int i;
    for(i=0;i<(r1*c1);i++)
    {
        *(c+i)=*(a+i)+*(b+i);
    }
    return c;
}

int* subtract(int *a,int *b,int *c,int r1,int c1)
{
    int i;
    for(i=0;i<(r1*c1);i++)
    {
        *(c+i)=*(a+i)-*(b+i);
    }
    return c;
}


int* multiply(int **a1,int **b1,int *c,int r1,int c2)
{
    int i,j,sum=0,n,m=0;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(n=0;n<r1;n++)
            {
                sum =sum + a1[i][n]*b1[n][m] ;
            }
            *c=sum;
            c++;
            sum =0;
            m++;
        }
        m=0;
    }

}