#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    printf("Enter Your String\n");
    gets(str);
    for(int i=0;str[i] != '\0';i++){
        if(str[i]>= 'a' && str[i]<='z') str[i] -= 32;
    }
    printf("%s",str);
    return 0;
}
