#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,i=0;
    char hexa[100];
    printf("Enter Your Number \n");
    scanf("%d",&number);
    while(number !=0){
        int rem = number%16;
        if   (rem>9) hexa[i++] = rem + 55;
        else hexa[i++] = rem + 48;
        number/=16;
    }
    i-=1; // to terminate last i++
    for(i;i>=0;i--) printf("%c",hexa[i]);
    return 0;
}
