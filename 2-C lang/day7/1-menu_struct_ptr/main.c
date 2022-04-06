#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
//=========================================================================================
void gotoxy(int x,int y);
void draw_box();
void draw_options();
void draw_options(int *pos);
void hidecursor();

void add_employee ();
void display();
void display_all();
//=========================================================================================
    typedef struct {
        int   id,
              overtime,
              deduct,
              age;
        char  name[50],
              address[50],
              gender[10];
        float salary;
    }employee;

    employee * arr_emp[100];
//=========================================================================================
int main()
{
    int position = 1;
    int esc = 0;

    hidecursor();

    do{

    draw_box();
    draw_options(&position);

    int ascii = getch();
        switch(ascii){
            case 71:
                position = 1;
                break;
            case 79:
                position = 4;
                break;
            case 72:
                position--;
                if(position == 0) position = 4;
                break;
            case 80:
                position++;
                if(position == 5) position = 1;
                break;
            case 13:

                switch(position){
                    case 1:
                        add_employee();
                        break;
                    case 2:
                        display();
                        break;
                    case 3:
                        display_all();
                        break;
                    case 4:
                        exit(1);
                        break;
                }

                break;
            case 27:
                system("cls");
                exit(1);
                break;
            default:
                continue;
        }

    }while(!esc);

    return 0;
}
//=========================================================================================

void add_employee (){

    system("cls");
    int num;

    printf("\nEnter The Number Of Employee : ");
    scanf("%d",&num);

    arr_emp[num] = (employee *)malloc(sizeof(employee));

    printf("\nInsert Data of Employee_%d \n\n",num);

            printf("Insert Employee Name : ");
            scanf("%s",&arr_emp[num]->name);

            printf("Insert Employee ID : ");
            scanf("%d",&arr_emp[num]->id);

            printf("Insert Employee Age : ");
            scanf("%d",&arr_emp[num]->age);

            printf("Insert Employee Address : ");
            scanf("%s",&arr_emp[num]->address);

            printf("Insert Employee Salary : ");
            scanf("%f",&arr_emp[num]->salary);

            printf("Insert Employee Gender : ");
            scanf(("%s"),&arr_emp[num]->gender);

            printf("Insert Employee Overtime : ");
            scanf("%d",&arr_emp[num]->overtime);

            printf("Insert Employee Deduct : ");
            scanf("%d",&arr_emp[num]->deduct);

            float net_salary = arr_emp[num]->salary + arr_emp[num]->overtime - arr_emp[num]->deduct;
            printf("Net salary = %.2f + %d - %d = %.2f ",arr_emp[num]->salary, arr_emp[num]->overtime, arr_emp[num]->deduct,net_salary);

            getch();
            system("cls");

            }

//=========================================================================================

void display(){

    system("cls");

    int num;
    printf("\nEnter Employee Number : ");
    scanf("%d",&num);

    if(arr_emp[num]){
        printf("\nName : %s",arr_emp[num]->name);
        printf("\nID : %d",arr_emp[num]->id);
        printf("\nAge : %d",arr_emp[num]->age);
        printf("\nAddress : %s",arr_emp[num]->address);
        printf("\nGender : %s",arr_emp[num]->gender);
        printf("\nSalary : %.2f",arr_emp[num]->salary);
        printf("\nOvertime : %d",arr_emp[num]->overtime);
        printf("\nDeduct : %d",arr_emp[num]->deduct);
        printf("\nNetsalary : %.2f",arr_emp[num]->salary + arr_emp[num]->overtime - arr_emp[num]->deduct );
        }
        else{
            printf("WROWNG ID");
        }
        getch();
        system("cls");
}

//=========================================================================================

void display_all(){
    system("cls");
    for(int i=0;i<100; i++){
        if(arr_emp[i]){
            printf("\n==============================\n");
            printf("Name : %s",arr_emp[i]->name);
            printf("\nID : %d",arr_emp[i]->id);
            printf("\nAge : %d",arr_emp[i]->age);
            printf("\nAddress : %s",arr_emp[i]->address);
            printf("\nGender : %s",arr_emp[i]->gender);
            printf("\nSalary : %.2f",arr_emp[i]->salary);
            printf("\nOvertime : %d",arr_emp[i]->overtime);
            printf("\nDeduct : %d",arr_emp[i]->deduct);
            printf("\nNetsalary : %.2f",arr_emp[i]->salary + arr_emp[i]->overtime - arr_emp[i]->deduct );
        }
    }
    getch();
    system("cls");
}

//=========================================================================================

void draw_options(int *pos){

    // to change the color //
    HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute ( hConsole,5);

    gotoxy(41,11); printf("1) Add New Employee\t\t\t");
    gotoxy(41,12); printf("2) Display         \t\t\t");
    gotoxy(41,13); printf("3) Display All Employees\t\t");
    gotoxy(41,14); printf("4) Exit\t\t\t\t");

    switch(*pos){
    case 1:
        SetConsoleTextAttribute ( hConsole,117);
        gotoxy(41,11); printf("1) Add New Employee                    ");
    break;
    case 2:
        SetConsoleTextAttribute ( hConsole,117);
        gotoxy(41,12); printf("2) Display                             ");
    break;
    case 3:
        SetConsoleTextAttribute ( hConsole,117);
        gotoxy(41,13); printf("3) Display All Employees               ");
    break;
    case 4:
        SetConsoleTextAttribute ( hConsole,117);
        gotoxy(41,14); printf("4) Exit                                ");
        printf("\n\n\n\n");
    break;
    }
    SetConsoleTextAttribute ( hConsole,5);
}

//=========================================================================================

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

//=========================================================================================

void draw_box(){

    // to change the color //
    HANDLE hConsole = GetStdHandle ( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute ( hConsole,5);

    gotoxy(39,10);
    printf("%c",201);
    for(int i=0; i<40 ; i++) printf("%c",205);
    printf("%c",187);

    for(int i=0;i<4;i++){
        gotoxy(39,11+i);
        printf("%c",186);
        for(int i=0; i<40 ; i++) printf("%c",32);
        printf("%c",186);
    }

    gotoxy(39,15);
    printf("%c",200);
    for(int i=0; i<40 ; i++) printf("%c",205);
    printf("%c",188);



}

//=========================================================================================

void hidecursor()
{
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
