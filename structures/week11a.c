#include<stdio.h>

struct student
{
    char name[100];
    int rollnumber;
    float average;
    char collegename[100];
};

int main()
{
    struct student s1;
    printf("Enter name of the student\n");
    scanf("%s",s1.name);
    printf("Enter roll number of the student\n");
    scanf("%d",&s1.rollnumber);
    printf("Enter average of the student\n");
    scanf("%f",&s1.average);
    printf("Enter student college name\n");
    scanf("%s",s1.collegename);
    printf("Entered details of the student are :\n");
    printf("Name of the student : %s\n",s1.name);
    printf("Roll Number: %d\n",s1.rollnumber);
    printf("Average :%f\n",s1.average);
    printf("College Name : %s\n",s1.collegename);
    return 0;
}