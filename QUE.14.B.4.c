 #include <stdio.h>
#include <stdlib.h>

int main()
{
    int empno,count=0;
    float basicsalary;
    printf("Enter the employee no (-999 to stop)");
    scanf("%d",&empno);
    while(empno!=-999){
        printf("Enter the basic salary for employee %d:",empno);
        scanf("%f",&basicsalary);
        if(basicsalary>=5000){
            count++;
        }
        printf("Enter the employee no(-999 to stop)");
        scanf("%d",&empno);
    }
    printf("Number of Employees with basic salary>=5000%d\n",count);
    return 0;
}
