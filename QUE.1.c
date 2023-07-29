
#include <stdio.h>
#include <stdlib.h>


int main()
{
    int marks[10];
    int total=0;
    int i;

    printf("Enter the 10 marks\n");
    for(i=0;i<10;i++)
    {
        printf("Mark %d:",i+1);
        scanf("%d", &marks[i]);
        total+=marks[i];

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], vectorSum[size];
    int scalarSum = 0;


    printf("Enter %d integer values for array1:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &array1[i]);
    }


    printf("Enter %d integer values for array2:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Value %d: ", i + 1);
        scanf("%d", &array2[i]);
    }
    float average=(float)total/10;
    printf("Total marks: %d\n", total);
    printf("Average marks: %d\n", average);
    if(average<50)
    {
        printf("Fail!\n");


    for (int i = 0; i < size; i++) {
        scalarSum += array1[i];
    }


    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
    }
    else
    {
        printf("Pass!\n");

    printf("Scalar Sum: %d\n", scalarSum);

    printf("Vector Sum (array1 + array2): ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    return 0;
}
