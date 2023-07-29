 #include <stdio.h>
#include <stdlib.h>
#define Pl 3.14159
int main()
{
    int choice;
    float radius,result;
    printf("Menu-Driven calculation");
    printf("1.calculate the circumference of a circle\n");
    printf("2.calculate the area of a circule\n");
    printf("3.calculate the volume of a sphere\n");
    printf("Enter your choice(1-3)\n");
    scanf("%d",&choice);
    printf("Enter the radius:");
    scanf("%f",&radius);
    switch(choice){
    case 1:
    reslut=2*Pl*radius;
    printf("The circumference of a circle is:%.2f\n",result);
    break;
    case 2:
    reslut=Pl*radius*radius;
    printf("The area of a circle is:%.2f\n",result);
    break;
    case 3:
    reslut=(4.0/3.0)*Pl*radius*radius*radius;
    printf("The volume of a sphere is:%.2f\n",result);
    break;
    default:
    printf("Error:Invalid choice.\n");
    break;
    }
    return 0;
}
