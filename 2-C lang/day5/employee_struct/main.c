#include <stdio.h>
#include <stdlib.h>

struct Employee {

    int   id,
          overtime,
          deduct,
          age;
    char  name[50],
          address[50],
          gender[7];
    float salary;

};

int main()
{
    float net_salary;
    struct Employee emp;

    printf("Insert Employee Data \n");

    printf("Insert Employee Name");
    gets(emp.name);

    printf("Insert Employee ID");
    scanf("%d",&emp.id);

    printf("Insert Employee Age");
    scanf("%d",&emp.age);

    printf("Insert Employee Address");
    scanf(("%s"),emp.address);

    printf("Insert Employee Salary");
    scanf("%f",&emp.salary);

    printf("Insert Employee Gender");
    scanf(("%s"),emp.gender);

    printf("Insert Employee Overtime");
    scanf("%d",&emp.overtime);

    printf("Insert Employee Deduct");
    scanf("%d",&emp.deduct);

    net_salary = emp.salary + emp.overtime - emp.deduct;
    printf("Net salary = %.2f + %d - %d = %.2f ",emp.salary, emp.overtime, emp.deduct,net_salary);

    return 0;
}
