#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("Enter the number(1-12):");
    scanf("%d",&month);
    switch(month){
    case 1:printf("January has 31 days\n");
    break;
    case 2:printf("February has 28 days\n");
    break;
    case 3:printf("March has 31 days\n");
    break;
    case 4:printf("April has 30 days\n");
    break;
    case 5:printf("May has 31 days\n");
    break;
    case 6:printf("June has 30 days\n");
    break;
    case 7:printf("July has 31 days\n");
    break;
    case 8:printf("Agust has 30 days\n");
    break;
    case 9:printf("september has 31 days\n");
    break;
    case 10:printf("October has 30 days\n");
    break;
    case 11:printf("November has 31 days\n");
    break;
    case 12:printf("December has 30 days\n");
    break;
    default:printf("Invalid month number\n");
    break;
    }
    return 0;
}
