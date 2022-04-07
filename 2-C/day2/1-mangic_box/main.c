#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

COORD coord={0,0};                   // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
int main()
{
    int length,size,i,c,r=1;
    printf("Enter your Magic_Box deminsions \' MUST be odd number \'\n");
    scanf("%d",&length);
    size = length * length;
    system("cls");
    c = (length+1)/2;

      if(length %2 && length!=0){

        for(i=1;i<=size;i++){
        gotoxy(c *4,r*2);
        printf("%d",i);


            if(i%length == 0)
            {
                r++;
            }
            else
            {
                c--;
                r--;

                if(r == 0)
                    r=length;
                if(c == 0)
                    c= length;
            }

    }
      }
    return 0;
}
