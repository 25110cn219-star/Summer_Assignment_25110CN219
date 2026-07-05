#include <stdio.h>

// Function to find and print common elements
void findCommonElements(int arr1[], int size1, int arr2[], int size2) {
    int common[50]; // Array to store common elements
    int k = 0;      // Counter for common elements
    int i, j, m, isDuplicate;

    // Compare each element of arr1 with arr2
    for (i = 0; i < size1; i++) {
        for (j = 0; j < size2; j++) {
            
            // If a match is found
            if (arr1[i] == arr2[j]) {
                isDuplicate = 0;

                // Check if we already recorded this element to avoid duplicates
                for (m = 0; m < k; m++) {
                    if (arr1[i] == common[m]) {
                        isDuplicate = 1;
                        break;
                    }
                }

                // If it is a new common element, save it
                if (!isDuplicate) {
                    common[k] = arr1[i];
                    k++;
                }
                break; // Move to the next element in arr1
            }
        }
    }

    // Print the results
    if (k == 0) {
        printf("No common elements found.\n");
    } else {
        printf("Common elements are: ");
        for (i = 0; i < k; i++) {
            printf("%d ", common[i]);
        }
        printf("\n");
    }
}

int main() {
    int size1, size2, i;

    // Input first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Call the function
    findCommonElements(arr1, size1, arr2, size2);

    return 0;
}