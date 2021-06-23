#include<stdio.h>
#include<math.h>
int main()
{
 	int a,b,c;
 	double D,root1,root2,real,img;
 	printf("Enter a,b,c\n");
 	scanf("%d %d %d",&a,&b,&c);
 	D=pow(b,2)-(4*a*c);
 	if(D==0)
 	{
 		root1=-b/(2*a);
 		printf("root is %.2lf\n",root1);
    }
    else if(D<0)
    {
    	real=-(double)b/(2*a);
    	img=sqrt(-D)/(2.0*a);
    	printf("roots are %.2lf+%.2lfi and %.2lf-%.2lfi\n",real,img,real,img);
	}else{
		root1=(-b+(sqrt(D)))/(2.0*a);
		root2=(-b-(sqrt(D)))/(2.0*a);
		printf("roots are %.2lf and %.2lf\n",root1,root2);
	}
	return 0;
}
