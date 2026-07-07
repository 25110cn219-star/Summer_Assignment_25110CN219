#include <stdio.h>

#define MAX 100

int main() {
    int matrix[MAX][MAX];
    int rows, cols;
    int isSymmetric = 1; // 1 means true, 0 means false

    // Input matrix dimensions
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    // 1. Check if the matrix is square
    if (rows != cols) {
        printf("The matrix is NOT symmetric (It must be a square matrix).\n");
        return 0;
    }

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 2. Validate symmetry condition
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) { // j = i + 1 avoids redundant checks
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Condition failed
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // 3. Print the final result
    if (isSymmetric) {
        printf("\nThe matrix is a SYMMETRIC matrix.\n");
    } else {
        printf("\nThe matrix is NOT a symmetric matrix.\n");
    }

    return 0;
}