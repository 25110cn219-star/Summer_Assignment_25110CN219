#include <stdio.h>

// Function to find the missing number
int findMissingNumber(int arr[], int total_elements) {
    // 'n' is the total count of numbers including the missing one
    int n = total_elements + 1; 
    
    // Calculate the expected sum of numbers from 1 to n
    int expected_sum = (n * (n + 1)) / 2;
    
    // Calculate the actual sum of elements present in the array
    int actual_sum = 0;
    for (int i = 0; i < total_elements; i++) {
        actual_sum += arr[i];
    }
    
    // The difference is the missing number
    return expected_sum - actual_sum;
}

int main() {
    // Example array: numbers from 1 to 6, with '4' missing
    int arr[] = {1, 2, 3, 5, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int missing_num = findMissingNumber(arr, size);
    
    printf("The missing number is: %d\n", missing_num);
    
    return 0;
}