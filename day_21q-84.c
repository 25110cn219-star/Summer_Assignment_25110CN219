#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];

    // Input string from user
    printf("Enter a string in lowercase: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character until the null terminator '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a lowercase alphabet
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from its ASCII value
            str[i] = str[i] - 32;
        }
    }

    // Print the converted uppercase string
    printf("Uppercase string: %s", str);

    return 0;
}