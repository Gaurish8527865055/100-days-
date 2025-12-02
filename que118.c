#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the array (n): ");
    scanf("%d", &n);
    
    int arr[n]; 
    printf("Enter %d elements (0 to %d, one missing): ", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int totalSum = n * (n + 1) / 2;
    int arraySum = 0;
    for (int i = 0; i < n; i++) {
        arraySum += arr[i];
    }
    int missingNumber = totalSum - arraySum;
    printf("Missing number: %d\n", missingNumber);

    return 0;
}
