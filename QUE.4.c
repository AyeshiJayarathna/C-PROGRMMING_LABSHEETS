
#include <stdio.h>

#define PI 3.14159

int main()
{
    double radius,diameter,circumference,area;
    printf("Enter the radius of the circle");
    scanf("%lf",&radius);

    diameter=2*radius;
    circumference=2*PI*radius;
    area=PI*radius*radius;

    printf("diameter:%.2f\n",diameter);
    printf("circumference:%.2f\n",circumference);
    printf("area:%.2f\n",area);
    return 0;
}
