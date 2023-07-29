
#include <stdio.h>
#include <stdlib.h>

int main()
{
int dis;
int time;
float avgspeed;
printf("Enter the distance travelled in meters:");
scanf("%d",&dis);
printf("Enter the time taken in seconds:");
scanf("%d",&time);
avgspeed=(float)dis/time;
printf("the average speed is%.2fm/s\n");

return 0;
}

