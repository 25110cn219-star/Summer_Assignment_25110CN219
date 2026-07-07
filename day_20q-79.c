#include <stdio.h>

#define MAX 100

int main() {
    int matrix[MAX][MAX];
    int rows, cols;

    // Input dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Compute and print row-wise sum
    printf("\n--- Row-wise Sum Results ---\n");
    for (int i = 0; i < rows; i++) {
        int rowSum = 0; // Reset sum for each new row
        
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        
        printf("Sum of Row %d = %d\n", i + 1, rowSum);
    }

    return 0;
}