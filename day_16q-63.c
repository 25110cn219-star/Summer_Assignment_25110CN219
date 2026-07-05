#include <stdio.h>
#include <stdlib.h>

// Comparison function needed for qsort
int compare(const void *a, const void *b) {
    return ((int)a - (int)b);
}

// Function to find and print the pair
void findPairWithSum(int arr[], int size, int targetSum) {
    // Step 1: Sort the array
    qsort(arr, size, sizeof(int), compare);

    int left = 0;
    int right = size - 1;
    int found = 0;

    // Step 2: Use two pointers from both ends
    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == targetSum) {
            printf("Pair found: %d and %d\n", arr[left], arr[right]);
            found = 1;
            left++; // Move pointers to find other potential pairs
            right--;
        } 
        else if (currentSum < targetSum) {
            left++;  // Move left pointer to increase the sum
        } 
        else {
            right--; // Move right pointer to decrease the sum
        }
    }

    if (!found) {
        printf("No pair found with the given sum.\n");
    }
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int targetSum = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Target Sum: %d\n", targetSum);
    findPairWithSum(arr, size, targetSum);

    return 0;
}