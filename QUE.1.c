
#include <stdio.h>

int find_minimum(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int find_maximum(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

float find_average(int arr[], int size) {
    float sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

void reverse_array(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[10];

    printf("Enter 10 values for the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    int min_val = find_minimum(arr, 10);
    printf("Minimum value: %d\n", min_val);


    int max_val = find_maximum(arr, 10);
    printf("Maximum value: %d\n", max_val);


    float avg_val = find_average(arr, 10);
    printf("Average value: %.2f\n", avg_val);


    reverse_array(arr, 10);
    printf("Reversed array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
