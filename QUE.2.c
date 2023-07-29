#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float n1,n2,result;
    printf("Menu-Driven calculator\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Division\n");
    printf("4.Multipication\n");
    printf("Enter your choice(1-4):\n");
    scanf("%d",&choice);
    printf("Enter 1st number");
    scanf("%f",&n1);
    printf("Enter 2nd number");
    scanf("%f",&n2);
    switch(choice){
    case 1:
    result=n1+n2;
    printf("Result:%.2f\n",result);
    break;
    case 2:
    result=n1-n2;
    printf("Result:%.2f\n",result);
    break;
    case 3:
    if(n2!=0){
    result=n1/n2;
    printf("Result:%.2f\n",result);
    }else{
    printf("Error:cannot divide by zero.\n");}
    break;
    case 4:
    result=n1*n2;
    printf("Result:%2f\n",result);
    break;
    defult:
    printf("Error:Invalid choice.\n");
    break;}
    return 0;
}
