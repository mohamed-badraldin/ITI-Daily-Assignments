#include <stdio.h>
#include <stdlib.h>
#include "conio.c"
#include "conio2.h"

void insert(int);
struct All_Employee {

    struct Employee {
        int   id,
              overtime,
              deduct,
              age,
              ind;
        char  name[50],
              address[50],
              gender[7];
        float salary;
    };

};

struct Employee emp[10]={0};
int has_data=0;
float net_salary;
int emp_index;

int main()
{

    int esc =0;
    int move=0;

    int index;

    char options [4][50] = {"Insert Employee\0","Display Employee Data\0","Display All Employees\0","EXIT\0"};
    while(!esc){
        if(move==0){
            textattr(0x75);
            printf("\n\n\n\t%s\n",options[0]);
            textattr(0x07);
            printf("\t%s\t\n\t%s\n\t%s\n",options[1],options[2],options[3]);
        }
        if(move==1){
            printf("\n\n\n\t%s\n",options[0]);
            textattr(0x75);
            printf("\t%s\n",options[1]);
            textattr(0x07);
            printf("\t%s\n\t%s\n",options[2],options[3]);
        }

        if(move==2){
            printf("\n\n\n\t%s\n",options[0]);
            printf("\t%s\n",options[1]);
            textattr(0x75);
            printf("\t%s\n",options[2]);
            textattr(0x07);
            printf("\t%s\n",options[3]);
        }

        if(move==3){
            printf("\n\n\n\t%s\n",options[0]);
            printf("\t%s\n",options[1]);
            printf("\t%s\n",options[2]);
            textattr(0x75);
            printf("\t%s\n",options[3]);
            textattr(0x07);
        }
        char ascii=getch();
             ascii=getch();

        if(ascii==72) move--;
        if(move==-1) move=3;

        if(ascii==80) move++;
        if(move==4) move=0;

        if(ascii==71) move=0;
        if(ascii==79) move=3;

        if(ascii==27) esc=1;

    ///////////////////////////////////////////////////////////// insert employee
    if(ascii==13){
        if(move==0){
            system("cls");
            printf("Input the number of Employee\n");
            scanf("%d",&index);
            insert(index);
            getch();
    }
    //////////////////////////////////////////////////////////////////////////////////////////////

            if(move==1){
                system("cls");
                printf("INSERT EMPLOYEE'S NUMBER :"); ///////////////
                scanf("%d",&emp_index);

                search(emp_index);

                getch();
            }
            if(move==2){
                system("cls");
                printf("\t** DISPLAY ALL EMPLOYEES ** "); ///////////////
                if(has_data == 1){
                    for(int i=0; i<=10;i++)
                    {
                      if(emp[i].ind != 0)
                      {
                        printf("\n\nName : %s",emp[i].name);
                        printf("\nID : %d",emp[i].id);
                        printf("\nAge : %d",emp[i].age);
                        printf("\nAddress : %s",emp[i].address);
                        printf("\nGender : %s",emp[i].gender);
                        printf("\nSalary : %.2f",emp[i].salary);
                        printf("\nOvertime : %d",emp[i].overtime);
                        printf("\nDeduct : %d",emp[i].deduct);
                        printf("\nNetsalary : %.2f",emp[i].salary + emp[i].overtime - emp[i].deduct );
                      }
                   }

                }
                else printf(" There Is No Data ");

                getch();
            }
            if(move==3){
                system("cls");
                printf("\t\t** THANK YOU **\n\n");
                getch();

                esc=1;
            }
        }
        system("cls");
    }

//////////////////////////////////////////////////

}


void insert(int i){

            printf("\n\nInsert Data of Employee_%d \n\n",i);

            printf("Insert Employee Name : ");
            scanf("%s",emp[i].name);

            printf("Insert Employee ID : ");
            scanf("%d",&emp[i].id);

            printf("Insert Employee Age : ");
            scanf("%d",&emp[i].age);

            printf("Insert Employee Address : ");
            scanf(("%s"),emp[i].address);

            printf("Insert Employee Salary : ");
            scanf("%f",&emp[i].salary);

            printf("Insert Employee Gender : ");
            scanf(("%s"),&emp[i].gender);

            printf("Insert Employee Overtime : ");
            scanf("%d",&emp[i].overtime);

            printf("Insert Employee Deduct : ");
            scanf("%d",&emp[i].deduct);

            emp[i].ind=i; //save the index of employee

            has_data=1;

            net_salary = emp[i].salary + emp[i].overtime - emp[i].deduct;
            printf("Net salary = %.2f + %d - %d = %.2f ",emp[i].salary, emp[i].overtime, emp[i].deduct,net_salary);
}

void search(int i){
                    if(emp[i].ind == i){
                        printf("Name : %s",emp[i].name);
                        printf("\nID : %d",emp[i].id);
                        printf("\nAge : %d",emp[i].age);
                        printf("\nAddress : %s",emp[i].address);
                        printf("\nGender : %s",emp[i].gender);
                        printf("\nSalary : %.2f",emp[i].salary);
                        printf("\nOvertime : %d",emp[i].overtime);
                        printf("\nDeduct : %d",emp[i].deduct);
                        printf("\nNetsalary : %.2f",emp[i].salary + emp[i].overtime - emp[i].deduct );
                    }
                    else printf("\nWROWNG ID\n");
                }



