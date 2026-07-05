#include <stdio.h>

int main() {
    int size, i, j;
    int primarySum = 0, secondarySum = 0;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &size);

    int matrix[size][size];

    // Input matrix elements
    printf("\nEnter elements for the matrix (%d x %d):\n", size, size);
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Single-loop optimization to calculate both sums
    for (i = 0; i < size; i++) {
        primarySum += matrix[i][i];                  // Condition: row == col
        secondarySum += matrix[i][size - 1 - i];    // Condition: col == size - 1 - row
    }

    // Print the results
    printf("\nMatrix View:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Primary Diagonal elements: %d\n", primarySum);
    printf("Sum of Secondary Diagonal elements: %d\n", secondarySum);

    return 0;
}