#include<stdio.h>
#include<math.h>
int main()
{
	int num,temp,sum=0,count=0,rem;
	scanf("%d",&num);
	temp=num;
	while(temp>0)
	{
		temp=temp/10;
		count++;
	}
	printf("Digits %d\n",count);
	temp=num;
	while(temp)
	{
		rem=temp%10;
		temp=temp/10;
		sum+=pow(rem,count);
	}
	printf("Sum is %d \n",sum);
	if(sum==num)
	printf("Armstrong");
	else
	printf("Not Armstrong");
	return 0;
}
