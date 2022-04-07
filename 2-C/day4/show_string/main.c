#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    char my_string[10];
    printf("Enter your string \n");
    for(int i=0;i<10;i++){
    ch=getche();
    if(ch == 13) { my_string[i]="\0"; break; }
    my_string[i]=ch;
    }
    system("cls");
    printf("\nYou Enterd : %s\0 \n",my_string);
    return 0;
}
