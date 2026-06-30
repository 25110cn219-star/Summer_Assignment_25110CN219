#include <stdio.h>

// Function to reverse a portion of the array
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, i, d;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask user for the number of positions to rotate left
    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &d);

    // Handle cases where d is greater than the array size
    d = d % n;

    // Reversal Algorithm for Left Rotation
    reverse(arr, 0, d - 1); // Step 1: Reverse the first d elements
    reverse(arr, d, n - 1); // Step 2: Reverse the remaining n-d elements
    reverse(arr, 0, n - 1); // Step 3: Reverse the entire array

    // Display the rotated array
    printf("\nArray after left rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}