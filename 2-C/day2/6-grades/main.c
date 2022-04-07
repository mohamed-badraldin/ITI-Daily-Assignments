#include <stdio.h>
#include <stdlib.h>

int main()
{
    float deg, grad;
    printf("Inter Your degree!\n");
    scanf("%f",&deg);
    if(deg > 84 && deg < 100) printf("Your Degrees are %.2f your Grad is A",deg);
    if(deg > 74 && deg < 85) printf("Your Degrees are %.2f your Grad is B",deg);
    if(deg > 64 && deg < 75) printf("Your Degrees are %.2f your Grad is C",deg);
    if(deg > 54 && deg < 65) printf("Your Degrees are %.2f your Grad is D",deg);
    if(deg > 44 && deg < 55) printf("Your Degrees are %.2f your Grad is F",deg);
    return 0;
}
