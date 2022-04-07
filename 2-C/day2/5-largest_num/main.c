#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f,s,th;
    printf("input first number!\n");
    scanf("%f",&f);
    printf("input second number!\n");
    scanf("%f",&s);
    printf("input third number!\n");
    scanf("%f",&th);

    if(f==s || f==th || s==th){
        printf("please inter different values");
    }else{
        if(f>s && f>th){
           printf("%.2f is the largest number\n",f);
        }
        if(s>f && s>th){
           printf("%.2f is the largest number\n",s);
        }
        if(th>s && th>f){
           printf("%.2f is the largest number\n",th);
        }
        if(f<s && f<th){
           printf("%.2f is the smallest number\n",f);
        }
        if(s<f && s<th){
           printf("%.2f is the smallest number\n",s);
        }
        if(th<s && th<f){
           printf("%.2f is the smallest number\n",th);
        }
    }

    return 0;
}
