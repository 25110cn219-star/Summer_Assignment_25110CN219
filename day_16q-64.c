#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    return ((int)a - (int)b);
}

// Function to remove duplicates from an array
int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1) {
        return size;
    }

    // Step 1: Sort the array
    qsort(arr, size, sizeof(int), compare);

    // Step 2: Move unique elements to the front
    int uniqueIndex = 0; 
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[uniqueIndex]) {
            uniqueIndex++;
            arr[uniqueIndex] = arr[i];
        }
    }

    // Return the new size of the array
    return uniqueIndex + 1;
}

int main() {
    int arr[] = {4, 2, 8, 4, 2, 9, 1, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array elements: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");

    // Remove duplicates and get new size
    int newSize = removeDuplicates(arr, size);

    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}