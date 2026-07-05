#include <stdio.h>
#include <stdlib.h>

// Comparison function needed for qsort
int compare(const void *a, const void *b) {
    return ((int)a - (int)b);
}

int findMaxFrequency(int arr[], int size, int *max_element) {
    if (size == 0) {
        return 0;
    }

    // Sort the array to group duplicate elements together
    qsort(arr, size, sizeof(int), compare);

    int max_count = 1;
    int current_count = 1;
    *max_element = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            current_count++;
        } else {
            // Check if the previous element group had the highest frequency
            if (current_count > max_count) {
                max_count = current_count;
                *max_element = arr[i - 1];
            }
            current_count = 1; // Reset count for the new element
        }
    }

    // Final check for the last element group in the array
    if (current_count > max_count) {
        max_count = current_count;
        *max_element = arr[size - 1];
    }

    return max_count;
}

int main() {
    int arr[] = {4, 2, 8, 3, 2, 4, 9, 2, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max_element;

    int max_freq = findMaxFrequency(arr, size, &max_element);

    printf("Element with maximum frequency: %d\n", max_element);
    printf("Frequency: %d\n", max_freq);

    return 0;
}