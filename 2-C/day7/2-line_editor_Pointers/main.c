#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

void gotoxy(int x,int y);


int len;
char ch1;
char ch2;
int pos=2;       //start print squares from x = 2 (gotoxy)
int keyb;    //to get ch from user

char* parr;
char* pcurr;

int main()
{

        get_data();

        parr=(int *)malloc(len* sizeof(int));
        pcurr = parr;
        for(int i=0;i<len;i++){
            *pcurr = 0;
            *pcurr++;
        }
        pcurr = parr;

        int move_draw = pos;
        for(int i=0;i<len;i++){
            gotoxy(move_draw,5);
            printf("%c",254);
            move_draw+=2;
        }
        gotoxy(pos,5);

        do{

            int key = getch();
            if(key == 224) key = getch();

            switch(key){
                case 77:
                    if(pos > len*2 -2)
                        pos = len*2 -2;
                    else{
                     pos +=2;
                    *pcurr++;
                    gotoxy(pos,5);
                    }
                    break;
                case 75:
                    if(pos < 4){
                    pos = 4;
                    }
                    else{
                    pos -=2;
                    *pcurr--;
                    gotoxy(pos,5);
                    }
                    break;
                case 13:
                    gotoxy(2,7);
                    printf("You Entered");
                    gotoxy(2,9);
                    pcurr=parr;
                    for(int i=0;i<=len;i++){
                        //if(*pcurr >= ch1 && *pcurr <= ch2)
                            printf("%c ",*pcurr++);
                    }
                    break;
                default:

                    if(pos<len*2+2){
                    if(key >= ch1 && key <= ch2){
                        printf("%c",key);
                        *pcurr = key;
                        pos+=2;
                        *pcurr++;
                         gotoxy(pos,5);
                    }

                    break;
                    }
            }
        }while(1);




    getch();
    return 0;
}

//=========================================================================
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
//=========================================================================

void get_data(){

    printf("\nEnter the length of line : ");
    scanf("%d",&len);

    printf("\nEnter the the first character of range : ");
    scanf(" %c",&ch1);

    printf("\nEnter the the last character of range : ");
    scanf(" %c",&ch2);

    system("cls");
    printf(" Length : %d\n From   : %c\n To     : %c\n",len,ch1,ch2);

}

//=========================================================================

