#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n], nextGreater[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        nextGreater[i] = -1; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater[i] = arr[j];
                break; 
            }
        }
    }
    printf("Next Greater Elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d", nextGreater[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
