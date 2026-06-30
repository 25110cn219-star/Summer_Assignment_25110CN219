#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Ask user for the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Linear search logic
    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Element found at index %d (Position %d)\n", i, i + 1);
            found = 1;
            break; // Stop searching once found
        }
    }

    // If element is not found
    if(!found) {
        printf("Element not found in the array.\n");
    }

    return 0;
}