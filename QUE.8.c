#include<stdio.h>
main()
{
	printf("The color: %s\n", "blue");   -(string) blue is printed
	printf("First number: %d\n", 12345); -(integer)12345 is printed
	printf("Second number: %04d\n", 25); -printed an integer with four numbers (0025)
	printf("Third number: %i\n", 1234);  -1234 is printed
         printf("Float number: %3.2f\n", 3.14159);  -printed the float number with 2 decimal   places
	printf("Hexadecimal: %x\n", 255);  -printed hexadecimal value of 255(ff)
	printf("Octal: %o\n", 255);-printed octal value of 255(377)
	printf("Unsigned value: %u\n", 150);-150 is printed
	printf("Just print the percentage sign %%\n", 10);-% is printed
}

