#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], prevGreater[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        prevGreater[i] = -1; 
        for (int j = i - 1; j >= 0; j--) { 
            if (arr[j] > arr[i]) {
                prevGreater[i] = arr[j];
                break; 
            }
        }
    }
    printf("Previous Greater Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d", prevGreater[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
