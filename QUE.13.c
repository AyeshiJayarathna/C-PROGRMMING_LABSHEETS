
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10];
    int i;
    printf("Enter 10 integers:\n");
    for (i=0;i<10;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&array[i]);
    }
    printf("\nElements in the arry are:\n");
    for(i=0;i<10;i++){
        printf("%d",array[i]);
    }
    printf("\n");
    return 0;
}
