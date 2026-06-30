#include <stdio.h>

int main() {
    int n, i, j, count;
    int has_duplicates = 0;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n]; // Array to track elements we have already processed

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize tracking array with 0
    }

    printf("\nDuplicate elements in the array:\n");

    // Logic to find duplicate elements
    for(i = 0; i < n; i++) {
        // Skip if this element was already marked as a duplicate before
        if(visited[i] == 1) {
            continue;
        }

        count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark the future duplicate as visited
            }
        }

        // If the element appeared more than once, it is a duplicate
        if(count > 1) {
            printf("%d (appears %d times)\n", arr[i], count);
            has_duplicates = 1;
        }
    }

    // If no duplicates were found
    if(!has_duplicates) {
        printf("No duplicate elements found in the array.\n");
    }

    return 0;
}