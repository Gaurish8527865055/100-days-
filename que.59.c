#include <stdio.h>

int main() {
    int arr[] = {10, 25, 32, 47, 58, 61, 70}; 
    int n = sizeof(arr) / sizeof(arr[0]);    
    int evenCount = 0; 
    int oddCount = 0;  
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++;  
        }
    }
    printf("Number of even elements: %d\n", evenCount);
    printf("Number of odd elements: %d\n", oddCount);

    return 0;
}