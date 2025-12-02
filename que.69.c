 #include <stdio.h>
#include <limits.h> 

int main() {
    int arr[100], n;
    int i;
    int largest = INT_MIN, secondLargest = INT_MIN;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        printf("No second largest element exists.\n");
    else
        printf("The second largest element is: %d\n", secondLargest);

    return 0;
}
