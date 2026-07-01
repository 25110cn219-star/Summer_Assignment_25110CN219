#include <stdio.h>

// Function to move all zeroes to the end of the array
void moveZeroesToEnd(int arr[], int n) {
    int count = 0; // Pointer to keep track of the next non-zero element position

    // Step 1: Traverse the array. If the element is non-zero,
    // place it at index 'count' and increment 'count'.
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count] = arr[i];
            count++;
        }
    }

    // Step 2: All non-zero elements are now shifted to the front.
    // Fill the remaining indices from 'count' to 'n-1' with zeroes.
    while (count < n) {
        arr[count] = 0;
        count++;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: \n");
    printArray(arr, n);

    // Call the function to shift zeroes
    moveZeroesToEnd(arr, n);

    printf("Array after moving zeroes to the end: \n");
    printArray(arr, n);

    return 0;
}