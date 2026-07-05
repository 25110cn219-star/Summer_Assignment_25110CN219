#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int size) {
    int i, j, temp;
    int swapped;

    for (i = 0; i < size - 1; i++) {
        swapped = 0; // Track if any swapping happens in this pass

        // Last i elements are already in place, so loop runs till (size - i - 1)
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1; // Mark that a swap occurred
            }
        }

        // Optimization: If no elements were swapped, the array is already sorted
        if (swapped == 0) {
            break;
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

    // Call Bubble Sort
    bubbleSort(arr, size);

    // Print sorted array
    printf("\nSorted array in ascending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}