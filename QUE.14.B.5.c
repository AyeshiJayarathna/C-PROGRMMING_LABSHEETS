#include <stdlib.h>
int main()
{
    int empno;
    float workhours,overtimepay;
    int overtimexceedingcount=0;
    int totalemps=0;
    printf("Enter the employee no");
    scanf("%d",&empno);
    while(empno!=-999){
        printf("Enter the number of hours worked by employee %d",empno);
        scanf("%f",&workhours);
        if(workhours>40){
            overtimepay=40*150+(workhours-40)*200;
        }else{
        overtimepay=workhours*150;
        }
        printf("Employee no:%d\n",empno);
        printf("Overtime payment:.2f\n",overtimepay);
        if(overtimepay>4000){
            overtimexceedingcount++;
        }
        totalemps++;
        printf("\nEnter the employee no");
        scanf("%d",&empno);
    }
    printf("\nPercentage of employees whose overtime payment exceeds rs,4000/-%.2f%%\n",(float)overtimexceedingcount/totalemps*100);
    return 0;
}

