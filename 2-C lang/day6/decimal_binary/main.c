#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int number;
    int rem;
    int arr[100];
    int index=0;
    printf("Enter Your Number : ");
    scanf("%d",&number);
    input = number;
    while(number>0){
        rem = number%2;
        arr[index++]=rem;
        number/=2;
    }
    printf("\nBinary value of %d is ",input);
    for(--index;index>=0;index--) printf("%d",arr[index]);
    printf("\n");
    return 0;
}
