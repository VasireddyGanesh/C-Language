#include<stdio.h>
struct employee
{ 
    char name[100];
    int age;
    int salary;
};

int main()
{
    struct employee emp1;
    struct employee *ptr=&emp1;
    printf("Enter name of the employee\n");
    scanf("%s",ptr->name);
    printf("Enter age of the employee\n");
    scanf("%d",&ptr->age);
    printf("Enter salary of the employee\n");
    scanf("%d",&ptr->salary);
    printf("Entered details of employee are :\n");
    printf("Name : %s\n",(*ptr).name);//another way of accessing structure members
    printf("Age : %d\n",ptr->age);
    printf("Salary : %d\n",ptr->salary);
    return 0;
}