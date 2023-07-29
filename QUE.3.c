
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname[50];
    float basicsalary,newsalary,increment;

    printf("Enter employee name:");
    scanf("%s",&empname);
    printf("Enter basic salary:");
    scanf("%f",&basicsalary);
    if (basicsalary>=10000)
    increment=basicsalary*0.15;
    else if(basicsalary>5000)
    increment=basicsalary*0.10;
    else
ent=basicsalary*0.05;
    newsalary=basicsalary+increment;
    printf("Employee name %s\n",empname);
    printf("new salary %.2f\n",newsalary);
    return 0;
}
