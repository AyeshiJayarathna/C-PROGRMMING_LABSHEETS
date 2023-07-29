#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n1,n2,avg;
    printf("Enter first decimal number");
    scanf("%lf",&n1);
    printf("Enter the second decimal number");
    scanf("%lf",&n2);
    avg=(n1+n2)/2;
    printf("average is:%.3lf",avg);

  return 0;
}
