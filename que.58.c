#include <stdio.h>

void findMaxMin(int arr[], int size, int *max, int *min) {
    if (size <= 0) {
        printf("Error: Array is empty or invalid size.\n");
        return;
    }

    *max = arr[0]; 
    *min = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i]; 
        }
    }
}

int main() {
    int arr[] = {1, 423, 6, 46, 34, 23, 13, 53, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maximum, minimum;

    findMaxMin(arr, size, &maximum, &minimum);

    printf("Maximum element: %d\n", maximum);
    printf("Minimum element: %d\n", minimum);

    return 0;
}
