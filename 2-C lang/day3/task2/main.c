#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int num_stud, num_sub,i,j,sum=0,sum_sub=0,avg_sub=0;
    int percent;
    char grade;
    printf("Enter the number of student\n");
    scanf("%d",&num_stud);
    printf("Enter the number of subject\n");
    scanf("%d",&num_sub);
    int arr[num_stud+2][num_sub+2];
    for(i=0;i<num_stud;i++){
        printf("Enter mark of student_%d\n",i+1);
        for(j=0;j<num_sub;j++){
            printf("subject_%d\n",j+1);
            scanf("%d",&arr[i][j]);
            sum+= arr[i][j];
        }
        arr[i][j]=sum;
        percent=((double)sum/(num_sub*100))*100;
        if(percent > 84 && percent < 101) grade='A';
        if(percent > 74 && percent < 85) grade='B';
        if(percent > 64 && percent < 75) grade='C';
        if(percent > 54 && percent < 65) grade='D';
        if(percent > 44 && percent < 55) grade='E';
        if(percent < 44 && percent> 0) grade='F';
        if(percent>100 || percent< 0) grade='-';

        arr[i][j+1]=grade;
        sum=0;
        grade="";
    }
      system("cls");
    for(i=0;i<num_stud;i++){
        printf("\nstudent_%d\t",i+1);
        for(j=0;j<num_sub+2;j++)
            if(j==num_sub+1) printf("%c",arr[i][num_sub+1]);
            else printf("%d\t",arr[i][j]);
        printf("\n");
    }
    for(int x=0;x<num_sub;x++){
        for(int y=0;y<num_stud;y++){
            sum_sub+= arr[y][x];
        }

        avg_sub=(double)sum_sub/num_sub;
        printf("\nAVG of subject_%d = %d\n",x+1,avg_sub);
        sum_sub=0;
    }

    return 0;
}
