#include <stdio.h>

int main() {
    int arr1[50], arr2[50], intersectArr[50];
    int size1, size2, i, j, m, k = 0, isDuplicate;

    // Input size and elements of the first array
    printf("Enter number of elements in the first array: ");
    scanf("%d", &size1);
    printf("Enter %d elements:\n", size1);
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of the second array
    printf("Enter number of elements in the second array: ");
    scanf("%d", &size2);
    printf("Enter %d elements:\n", size2);
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Compare arrays to find common elements
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            // Check if element is common to both arrays
            if (arr1[i] == arr2[j]) {
                
                // Check if this element is already added to intersectArr
                isDuplicate = 0;
                for (m = 0; m < k; m++) {
                    if (arr1[i] == intersectArr[m]) {
                        isDuplicate = 1;
                        break;
                    }
                }

                // If it is a new common element, add it
                if (!isDuplicate) {
                    intersectArr[k] = arr1[i];
                    k++;
                }
                break; // Break the inner loop since a match for arr1[i] is found
            }
        }
    }

    // Print the intersection result
    if (k == 0) {
        printf("\nThere are no common elements (Intersection is empty).\n");
    } else {
        printf("\nThe Intersection of the two arrays is:\n");
        for (i = 0; i < k; i++) {
            printf("%d ", intersectArr[i]);
        }
        printf("\n");
    }

    return 0;
}