#include <stdio.h>

int main() {
    int a[10][10];
    int m, n;

    printf("Enter number of rows (max 10): ");
    scanf("%d", &m);

    printf("Enter number of columns (max 10): ");
    scanf("%d", &n);
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nDiagonal Traversal:\n");
    for (int startCol = 0; startCol < n; startCol++) {
        int row = 0;
        int col = startCol;

        while (row < m && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
        printf("\n");
    }
    for (int startRow = 1; startRow < m; startRow++) {
        int row = startRow;
        int col = n - 1;

        while (row < m && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
        printf("\n");
    }

    return 0;
}
