#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
//=========================================================================
void gotoxy(int x,int y);
void get_data();
int ch1;
int ch2;
int len=5;
int end=0; // to show the data only one time
//=========================================================================
int main()
{
    int i;
    int j;
    int posx=0;
    int posy=0;
    int x=5;
    int y=5;
//=========================================================================
    get_data(); // call fun to get length and characters length char 1, char 2
//=========================================================================
    int *ptr = (int *)malloc(len*len*sizeof(int));  // allocate one pointer to point the start of all characters group
    int *p=ptr;                                     // another pointer to move in group

//=========================================================================
    for(i=0; i<len*len; i++){    // fill all allocated memory with square shape
        *p = 254;
        *p++;
    }
//=========================================================================
    p=ptr;  // return the move pointer to the main pointer (start)
//=========================================================================
    for(i=0; i<len; i++){         // print the box on the screen (square => width = height)
        for(j=0; j<len; j++){
            gotoxy(x,y);
            printf("%c",*p++);
            x+=2;
        }
        x=5;
        y++;
    }
//=========================================================================
    p=ptr;   // return the move pointer to the main pointer
//=========================================================================

x=5;
y=5;
//=========================================================================
    do{

    gotoxy(x,y);

    int key = getch();
    if(key == 224) key = getch(); // check if the pressed key is char or arrows

    switch(key){

    case 77: // right //

        if(posx>=0 && posx<len){
            *p++;
            posx++;
            x+=2;
        }
        gotoxy(x,y);
        if(posx==len){ posx--; *p--; x-=2; }
        break;
//=========================================================================
    case 75: // left //

        if(posx>0 && posx<len){
            *p--;
            posx--;
            x-=2;
        }
        gotoxy(x,y);
        break;
//=========================================================================
    case 72: // up //

        if(posy>0 && posy<len*len){
            for(i=0; i<len; i++){
                *p--;
                posy--;
            }
                y--;
        }
        gotoxy(x,y);
        break;
//=========================================================================
    case 80: //down //

        if(posy>=0 && posy<len*len){
            for(i=0; i<len; i++){
                *p++;
                posy++;
            }
                y++;
        }
        if(posy==len*len){
            for(i=0; i<len; i++){
            posy--; *p--;
            }
            y--;
        }
        gotoxy(x,y);
        break;
//=========================================================================
    case 13: //enter //

        if(! end) // show the data only one time
        {
            x=50; y=5;  // show the box after edit in the other side of screen
            p=ptr;
            for(i=0; i<len; i++){
                for(j=0; j<len; j++){
                    gotoxy(x,y);
                    printf("%c",*p++);
                    x+=2;
                }
                x=50;
                y++;
            }
            end=1;
        }
        break;
//=========================================================================
    default:
        if(key >= ch1 && key <= ch2){ // if the character in the range save it in memory
                printf("%c",key);
                *p = key;
            }
        break;
//=========================================================================
    }
}while(! end);


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
