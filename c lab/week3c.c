#include<stdio.h>
#include<math.h>
int main()
{
 float r1,r2,s,t;
 int a,b,c,d;
 printf("Enter the coefficients with decreasing x power \n");
 scanf("%d %d %d",&a,&b,&c);
 d=b*b-4*a*c;
 if(d>0)
  {  r1=(-b+sqrt(d))/2*a;
     r2=(-b-sqrt(d))/2*a;
     printf("Nature of the roots is real and different\n");
     printf("root1=%.2f and root2=%.2f \n",r1,r2);
  }  
 else if(d==0)
  {
     r1=-b/2*a;
     r2=-b/2*a;
        printf("Nature of the roots is real and equal \n");
        printf("root1=root2=%.2f \n",r1);
  }     
 else
     {     
         s=-b/2*a;
         t=-(b*b-4*a*c);
         t=sqrt(t)/2*a;
           printf("Nature of the roots is not real(imaginary)\n");
           printf("root1=%.2f+%.2fi and root2=%.2f-%.2fi \n",s,t,s,t);
     }
 return 0;
}