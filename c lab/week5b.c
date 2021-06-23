#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b,l;
    printf("enter two integer values \n");
    scanf("%d %d",&a,&b);
    if(a==0 || b==0)
      printf("Lcm is undefined \n");
    else
   {
     l=lcm(a,b);
    printf("The Lcm of %d and %d is %d \n",a,b,l);
   } 
   return 0;
}
int lcm(int a,int b)
{
    int i,n;
    if(a>b)
        n=a;
    else
        n=b;
for(i=n;;i++)
{
    if(i%a==0 && i%b==0)
    goto label;
}
label: return i;
}