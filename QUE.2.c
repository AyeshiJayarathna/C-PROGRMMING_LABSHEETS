#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], scalarSum = 0;
    int vectorSum[size];


    printf("Enter %d elements for array1:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array1[i]);
        scalarSum += array1[i];
    }


    printf("Enter %d elements for array2:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array2[i]);
        scalarSum += array2[i];
    }


    for (int i = 0; i < size; i++) {
        vectorSum[i] = array1[i] + array2[i];
    }


    printf("Scalar Sum: %d\n", scalarSum);


    printf("Vector Sum: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", vectorSum[i]);
    }
    printf("\n");

    return 0;
}
