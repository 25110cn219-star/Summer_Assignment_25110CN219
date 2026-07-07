#include <stdio.h>

#define MAX 100

int main() {
    int matrix[MAX][MAX];
    int rows, cols;

    // Input matrix dimensions
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

    // Compute and print column-wise sum
    printf("\n--- Column-wise Sum Results ---\n");
    for (int j = 0; j < cols; j++) {
        int colSum = 0; // Reset sum for each new column
        
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j]; // Notice the indices: matrix[i][j]
        }
        
        printf("Sum of Column %d = %d\n", j + 1, colSum);
    }

    return 0;
}