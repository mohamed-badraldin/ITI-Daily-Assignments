#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2;
    printf("input your first number\n");
    scanf("%f",&num1);
    printf("input your first number\n");
    scanf("%f",&num2);
    printf("sum %.2f + %.2f = %.2f", num1,num2, num1+num2);
    return 0;
}
