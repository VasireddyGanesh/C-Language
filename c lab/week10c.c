#include<stdio.h>
int main()
{
    int a,b,c;
    int* ptr[3];//an array of 3 integer pointers
    ptr[0]=&a;
    ptr[1]=&b;
    ptr[2]=&c;
    printf("Enter values of a , b and c :");
    scanf("%d %d %d",ptr[0],ptr[1],ptr[2]);
    printf("Printing values of a,b and c using array of pointers\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\n",*(*(ptr+i)));
    }
    return 0;
}
