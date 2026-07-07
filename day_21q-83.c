#include <stdio.h>
#include <ctype.h> // Header for tolower() function

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int vowels = 0;
    int consonants = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character until the null terminator '\0'
    for (int i = 0; str[i] != '\0'; i++) {
        // Convert character to lowercase to minimize comparison checks
        char ch = tolower(str[i]);

        // Check if the character is an alphabet letter
        if (ch >= 'a' && ch <= 'z') {
            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                // If it is an alphabet but not a vowel, it is a consonant
                consonons++; // Corrected variable increment below
                consonants++;
            }
        }
    }

    // Print the results
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}