#include<stdio.h>
int main()
{
    struct class
    {
        int rollno;
        char name[20];
        int mark1,mark2,mark3;
        float avg;
    };
    int n,i;
    FILE *ptr;
    ptr=fopen("file1.txt","w+");
    printf("enter no.of students\n");
    scanf("%d",&n);
    struct class s[n];
    printf("please enter students details\n");
    for(i=0;i<n;i++)
  {
    printf("Enter roll number\n");
    scanf("%d",&s[i].rollno);
    printf("Please enter student name\n");
    scanf("%s",s[i].name);
    printf("Enter subject 1 marks\n");
    scanf("%d",&s[i].mark1);
    printf("Enter subject2 marks\n");
    scanf("%d",&s[i].mark2);
    printf("Enter subject3 marks\n");
    scanf("%d",&s[i].mark3);
    s[i].avg=(s[i].mark1+s[i].mark2+s[i].mark3)/3.0;
    printf("student avg is %f \n",s[i].avg);
  }
  fprintf(ptr,"Roll no. Name subject1 subject2 subject3 Average\n");
  for(i=0;i<n;i++)
  {
     fprintf(ptr,"%d\t\t %s\t %d\t\t %d\t\t %d\t\t %f \n",s[i].rollno,s[i].name,s[i].mark1,s[i].mark2,s[i].mark3,s[i].avg); 
  }
  return 0;
}