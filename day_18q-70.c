#include <stdio.h>

// Function to perform Selection Sort
void selectionSort(int arr[], int size) {
    int i, j, minIndex, temp;

    // Move the boundary of the unsorted subarray one by one
    for (i = 0; i < size - 1; i++) {
        // Assume the first element of the unsorted part is the minimum
        minIndex = i;

        // Check the rest of the array to find the actual minimum element
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update index of the minimum element
            }
        }

        // Swap the found minimum element with the first element of the unsorted part
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int size, i;

    // Input array size
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call Selection Sort
    selectionSort(arr, size);

    // Print sorted array
    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}