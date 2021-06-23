#include<stdio.h>
struct student
{
    int marks[6];
};
int main()
{
    struct student s[3];
    int sum;
  for(int j=0;j<3;j++)
  {
      sum=0;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&s[j].marks[i]);
        sum=sum+s[j].marks[i];
    }
    printf("total marks of student %d is %d\n",j+1,sum);
  }
  
}