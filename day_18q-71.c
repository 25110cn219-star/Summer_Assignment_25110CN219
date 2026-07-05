#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Calculate the middle index safely to avoid integer overflow
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; // Target found, return its index
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    return -1; // Target not found
}

int main() {
    int size, i, target, result;

    // Input array size
    printf("Enter the number of elements (Array MUST be sorted): ");
    scanf("%d", &size);

    int arr[size];

    // Input array elements
    printf("Enter %d sorted elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target value to search
    printf("Enter the element to search for: ");
    scanf("%d", &target);

    // Call Binary Search
    result = binarySearch(arr, size, target);

    // Print the result
    if (result != -1) {
        printf("\nElement found at index position: %d\n", result);
    } else {
        printf("\nElement is not present in the array.\n");
    }

    return 0;
}