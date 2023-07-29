#include<stdio.h>
int main(){
int marks[10];
int sum=0;
int max=0,min=100;
printf("Enter the marks of 10 students\n");
       for(i=0;i<10;i++){
        printf("students %d:",i+1);
        scanf("%d",&marks[i]);
        if(marks[i]>max){
            max=marks[i];
            }
            if(marks[i]<min){
                min=marks[i];
            }
            sum+=marks[i];
       }
       float average=(float)sum/10;
       printf("\nMaximum marks:%d\n",max);
       printf("\nMinimum marks:%d\n",min);
       printf("Average marks:%.2f\n",average);
       return 0;
       }
