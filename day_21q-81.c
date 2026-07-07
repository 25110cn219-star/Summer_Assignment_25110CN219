#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int length = 0;

    // Input string from user
    printf("Enter a string: ");
    // Using fgets to safely read spaces; removes trailing newline if present
    fgets(str, sizeof(str), stdin); 

    // Calculate length by iterating until the null terminator '\0'
    while (str[length] != '\0') {
        length++;
    }

    // Adjust length if fgets captured the newline character '\n'
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    // Print the result
    printf("The length of the string is: %d\n", length);

    return 0;
}