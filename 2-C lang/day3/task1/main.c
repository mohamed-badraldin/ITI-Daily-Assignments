#include <stdio.h>
#include <stdlib.h>
#define length 4
int main()
{
    int arr[length]={0},
        rev[length]={0},
        sort[length]={0},
        r=3,
        i,
        j,
        choice,
        sum=0,
        exit=0;

    while(!exit){
    system("cls");
    printf(" 1- fill array\n 2-sum array\n 3-reverse\n 4-min&max\n 5-sorting\n 6-exit\n Enter your choice\n");
    scanf("%d",&choice);
        switch(choice){
            case 1:
              for(i=0;i<length;i++)
                {
                    system("cls");
                    printf("input your number_%d\n",i+1);
                    scanf("%d",&arr[i]);
                }
                break;
            case 2:
                system("cls");
                for(i=0;i<length;i++){
                   sum+=arr[i];
                }
                printf("summation = %d",sum);
                break;
            case 3:
                system("cls");
                for(i=0;i<length;i++){
                   rev[i]=arr[r];
                   r--;
                printf(" %d ",rev[i]);
                }
                break;
            case length:
                system("cls");
                int max=arr[0],mini=arr[0];
                for(i=0;i<length;i++){
                    if(arr[i]>max) max = arr[i];
                    if(arr[i]<mini) mini = arr[i];
                }
                printf("Maximum number is %d\n",max);
                printf("minimum number is %d",mini);
                break;
            case 5:
                system("cls");

                for(int i=0;i<length;i++){
                //get minimum
                int min=arr[i],
                    min_index =i;
                    for(int j=i;j<length;j++){
                        if(arr[j]<min){
                            min = arr[j];
                            min_index = j;
                        }
                     }
                     //swampping
                    int temp=arr[i];
                        arr[i]= arr[min_index];
                        arr[min_index]=temp;

                printf(" %d ",arr[i]);
                }
                break;
            case 6:
                exit=1;
    }
        getch();
}
system("cls");
printf("\n\n\t... Thank you ...\n\n");
    return 0;
}
