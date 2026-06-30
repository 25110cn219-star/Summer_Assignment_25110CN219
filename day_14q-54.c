#include <stdio.h>

int main() {
    int n, i, j, count;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n]; // Array to keep track of counted elements

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0; // Initialize visited array with 0
    }

    // Count frequency of each element
    printf("\nElement | Frequency\n");
    printf("-------------------\n");
    for(i = 0; i < n; i++) {
        // Skip this element if it has already been counted
        if(visited[i] == 1) {
            continue;
        }

        count = 1; // Start counting current element
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark duplicate element as visited
            }
        }

        // Display the frequency of the element
        printf("   %d    |    %d\n", arr[i], count);
    }

    return 0;
}