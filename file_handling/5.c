#include<stdio.h>
int main()
{
    FILE *ptr1,*ptr2;
    int a,b,sum,i,n;
    char ch;
    ptr1=fopen("text4.txt","w+");//automatically creates a new text file 
    printf("Enter n value\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {  
        fprintf(ptr1,"Enter a and b values\n");
        scanf("%d %d",&a,&b);
        sum=a+b;
        fprintf(ptr1,"The sum of a and b is %d\n",sum);
     } 
    rewind(ptr1);//by default file pointer ....points to the next characters after writing..
    for(i=0;(ch=fgetc(ptr1))!=EOF;i++)
    {   
    printf("%c",ch);
    }
    fclose(ptr1);
    return 0;
}