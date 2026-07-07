#include <stdio.h>

void removeSpaces(char *str) {
    int i = 0; // Tracks the current character being read
    int j = 0; // Tracks the position to write the non-space character

    // Loop through the entire string
    while (str[i] != '\0') {
        // If the character is not a space, copy it forward
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }
    
    // Add the null terminator to mark the new end of the string
    str[j] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    // Read the string including spaces up to 99 characters
    fgets(str, sizeof(str), stdin);

    // Call the function to strip out the spaces
    removeSpaces(str);

    printf("String after removing spaces: %s", str);

    return 0;
}