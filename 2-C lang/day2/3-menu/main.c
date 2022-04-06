#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//C Program to display simple menu. (menu)
int main()
{
    char cho;
    int yn=1;

        do{
        system("cls");
        printf("choose your meal\nA- meat \nB- chicken \nC- fish \n\n");
        scanf("%c",&cho);
        switch(cho){
            case 'a':
            case 'A':
                printf("your meal is meat");
                break;
            case 'b':
            case 'B':
                printf("your meal is chicken");
                break;
            case 'c':
            case 'C':
                printf("your meal is fish\n");
                break;
            default:
                printf("Please choose a correct choice");
        }

        printf("\n you want continue yes:\'1\' no:\'0\'\n");
        scanf("%d",&yn);
        }while(yn==1);

            system("cls");
            printf("thank you");

    return 0;
}
