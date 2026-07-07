#include <stdio.h>

int main() {
    char str[1000];
    int freq[256] = {0}; // Initialize all frequencies to 0
    int i = 0;

    printf("Enter a string: ");
    // Read the string including spaces (safer than gets())
    fgets(str, sizeof(str), stdin);

    // Count the frequency of each character
    while (str[i] != '\0') {
        // Exclude the newline character that fgets often captures
        if (str[i] != '\n') {
            freq[(unsigned char)str[i]]++;
        }
        i++;
    }

    printf("\nCharacter Frequencies:\n");
    // Display characters that appeared at least once
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("'%c' : %d\n", i, freq[i]);
        }
    }

    return 0;
}