#include <stdio.h>

int main() {
    int arr[] = {5, -3, 0, 7, -1, 0, 2, -6, 0, 4}; 
    int n = sizeof(arr) / sizeof(arr[0]); 

    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } else if (arr[i] < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
    }
    printf("Number of positive elements: %d\n", positive_count);
    printf("Number of negative elements: %d\n", negative_count);
    printf("Number of zeros: %d\n", zero_count);

    return 0;
}