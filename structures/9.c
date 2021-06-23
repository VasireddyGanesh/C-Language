#include<stdio.h>
struct employee
{
    char *name;
    char* experience;
    char *designation;
    struct salary
    {
        float basic;
        float DA;
        float HRA;
    }emp;
};

int main()
{
    struct employee emp1;
    emp1.name="ganesh";
    emp1.experience="3 years";
    emp1.designation="manager";
    emp1.emp.basic=10000;
    emp1.emp.DA=0.95;
    emp1.emp.HRA=0.1;
    printf("Total gross salary is %f",(10000+(10000*0.95)+(10000*0.1)));
    return 0;
}