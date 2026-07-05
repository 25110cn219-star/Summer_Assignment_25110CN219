#include <stdio.h>

// Function to sort array in descending order
void sortDescending(int arr[], int size) {
    int i, j, temp, swapped;

    for (i = 0; i < size - 1; i++) {
        swapped = 0; 

        for (j = 0; j < size - i - 1; j++) {
            // Flip the operator to '<' to push smaller elements to the end
            if (arr[j] < arr[j + 1]) {
                // Swap adjacent elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                swapped = 1; 
            }
        }

        // If no swapping happened, the array is already sorted
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

    // Call the sorting function
    sortDescending(arr, size);

    // Print the sorted array
    printf("\nSorted array in descending order:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}