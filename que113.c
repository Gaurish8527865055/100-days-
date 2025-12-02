#include <stdio.h>

int main() {
    int n, k;
    
    printf("Enter size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    if (k <= 0 || k > n) {
        printf("Invalid value of k.\n");
        return 0;
    }

   
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
      
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }

    
    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}
