#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int diag[n];  
    int isDistinct = 1;  
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        diag[i] = matrix[i][i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct)
            break;
    }
    if (isDistinct)
        printf("\nAll diagonal elements are DISTINCT.\n");
    else
        printf("\nDiagonal elements are NOT distinct.\n");

    return 0;
}
 