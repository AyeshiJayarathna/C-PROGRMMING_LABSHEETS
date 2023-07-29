#include <stdio.h>
#include <stdlib.h>

int main()
{
 double tempInF;
 printf("Enter the temperature in Fahrenheit:");
 scanf("%d",&tempInF-32);
 double tempInC=(5.0/9.0)*(tempInF-32);
 printf("Temperature in Celsius:%3lf",tempInC);

return 0;
}
