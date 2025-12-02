#include <stdio.h>

int findCeilIndex(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    int result = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            result = mid;   
            high = mid - 1; 
        } else {
            low = mid + 1;  
        }
    }

    return result;
}

int main() {
    int n, x;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter x: ");
    scanf("%d", &x);

    int index = findCeilIndex(arr, n, x);

    printf("Index of ceil: %d\n", index);

    return 0;
}
