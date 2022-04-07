#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("enter your number \n");
    scanf("%d",&num);
    if(num==0) printf("zero");
    if(num % 2) printf("%d is odd nummber",num);
    if(!num % 2)("%d is even nummber",num);
    return 0;
}
