#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int answer[n];
    int prefix[n];
    prefix[0] = 1; 
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = prefix[i] * suffix;
        suffix *= nums[i];
    }
    printf("Answer array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");

    return 0;
}
