#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char students[6][10];
    int stu_num=1, i;

    for(i=0;i<6;i++){
    printf("\nStudent_%d\nEnter your frist name \n",stu_num);
    gets(students[i]);
    printf("Enter your last name \n");
    gets(students[i+1]);
    i++;
    stu_num++;
    }

    printf("\nStudent's Names\n\n");
    for(i=0;i<6;i++){
        printf("\t%s %s\n\n",students[i],students[i+1]);
        i++;
    }
    return 0;
}
