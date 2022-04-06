#include <stdio.h>
#include <stdlib.h>

int main()
{
    float input,sum=0;
        do{
            printf("\n Input your number \n");
            scanf("%f",&input);
                if(sum + input > 100){
                    break;
                }
                else{
                    sum += input;
                }
        }while(sum<100);
                    printf("your sum is %0.2f",sum);
    return 0;
}
