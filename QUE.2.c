
 #include <stdlib.h>
#include <stdio.h>

int main()
{
   int marks[10];
   int total=0;
   int i;
   printf("Enter the 10 marks\n:");
   for(i=0;i<10;i++){
    printf("marks %:",i+1);
    scanf("%d",&marks[i]);
    total+=marks[i];
    }
    float average=(float)total/10;
    printf("Total marks:%d\n");
    printf("average marks:%d\n",average);
    if(average<50)
    {
    printf("Fail!\n");
    }
    else
    {
        printf("pass!\n");
    }
    return 0;
}
