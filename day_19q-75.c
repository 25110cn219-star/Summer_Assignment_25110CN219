#include <stdio.h>

int main() {
    int rows, cols, i, j;

    // Input the dimensions of the original matrix
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    // Transposed matrix has flipped dimensions: [cols][rows]
    int transpose[cols][rows];

    // Input elements for the matrix
    printf("\nEnter elements of the matrix (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Perform the transpose operation
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Print the transposed matrix
    printf("\nTransposed Matrix:\n");
    // Notice the loop limits are flipped: outer loop runs up to cols, inner up to rows
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}