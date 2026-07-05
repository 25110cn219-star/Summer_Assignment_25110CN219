#include <stdio.h>

int main() {
    int arr1[50], arr2[50], merged[100];
    int size1, size2, i, k;

    // Input size and elements of the first array
    printf("Enter the number of elements in the first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements for the first array:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of the second array
    printf("Enter the number of elements in the second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements for the second array:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Step 1: Copy elements of the first array into the merged array
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // Step 2: Copy elements of the second array into the merged array
    k = size1; // Start inserting from the index right after the last element of arr1
    for (i = 0; i < size2; i++) {
        merged[k] = arr2[i];
        k++;
    }

    // Print the final merged array
    printf("\nThe merged array is:\n");
    for (i = 0; i < size1 + size2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}