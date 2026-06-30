#include <stdio.h>
#include <limits.h> // Required for INT_MIN

int main() {
    int n, i;

    // Ask user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must contain at least two elements.\n");
        return 1;
    }

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second largest
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    // Single pass logic to find largest and second largest
    for(i = 0; i < n; i++) {
        if(arr[i] > largest) {
            second_largest = largest; // Previous largest becomes second largest
            largest = arr[i];         // Update largest
        } 
        // If current element is smaller than largest but greater than second largest
        else if(arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // Display results
    if (second_largest == INT_MIN) {
        printf("There is no second largest element (all elements are equal).\n");
    } else {
        printf("The largest element = %d\n", largest);
        printf("The second largest element = %d\n", second_largest);
    }

    return 0;
}

    