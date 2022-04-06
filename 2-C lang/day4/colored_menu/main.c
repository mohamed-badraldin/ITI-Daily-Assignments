#include <stdio.h>
#include <stdlib.h>
#include "conio.c"
#include "conio2.h"

int main()
{
    int esc =0;
    int move=2;

    char options [3][8] = {"NEW\0","DISPLAY\0","EXIT\0"};
    while(!esc){
        if(move==0){
            textattr(0x75);
            printf("%s\n",options[0]);
            textattr(0x07);
            printf("%s\n%s",options[1],options[2]);
        }
        if(move==1){
            printf("%s\n",options[0]);
            textattr(0x75);
            printf("%s\n",options[1]);
            textattr(0x07);
            printf("%s\n",options[2]);
        }
        if(move==2){
            printf("%s\n",options[0]);
            printf("%s\n",options[1]);
            textattr(0x75);
            printf("%s",options[2]);
            textattr(0x07);
        }
        char ascii=getch();
             ascii=getch();

        if(ascii==72) move--;
        if(move==-1) move=2;

        if(ascii==80) move++;
        if(move==3) move=0;

        if(ascii==71) move=0;
        if(ascii==79) move=2;

        if(ascii==27) esc=1;

        if(ascii==13){
            if(move==0){
                system("cls");
                printf("\t\t** NEW PAGE **\n\n");
                getch();
            }
            if(move==1){
                system("cls");
                printf("\t\t** DISPLAY PAGE **\n\n");
                getch();
            }
            if(move==2){
                system("cls");
                printf("\t\t** THANK YOU **\n\n");
                getch();

                esc=1;
            }
        }
        system("cls");
    }
    return 0;
}
