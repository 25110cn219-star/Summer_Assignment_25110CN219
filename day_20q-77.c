#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Get dimensions of both matrices
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Check if multiplication is mathematically possible
    if (c1 != r2) {
        printf("Error! Columns of first matrix must equal rows of second.\n");
        return 1;
    }

    // Define Variable-Length Arrays (VLAs) based on user input
    int first[r1][c1], second[r2][c2], result[r1][c2];

    // Input elements for the first matrix
    printf("\nEnter elements of first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &first[i][j]);
        }
    }

    // Input elements for the second matrix
    printf("\nEnter elements of second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &second[i][j]);
        }
    }

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0; // Initialize cell
            for (int k = 0; k < c1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    // Print the final result matrix
    printf("\nResultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}