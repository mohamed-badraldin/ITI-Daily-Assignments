#include <stdio.h>
#include <stdlib.h>
int powerf(int,int);
int main()
{
    int base;
    int power;
    printf("Enter Base Number : ");
    scanf("%d",&base);
    printf("Enter Power Number : ");
    scanf("%d",&power);
    printf("\n%3d power%3d equal%3d\n",base,power,powerf(base,power));
    return 0;
}
int powerf(int b,int p){
    int res =1;
    for(p;p>0;p--){
        res *= b;
    }
    return res;
}
