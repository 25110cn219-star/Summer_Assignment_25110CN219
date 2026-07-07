#include <stdio.h>

#define MAX_SIZE 200

int main() {
    char str[MAX_SIZE];
    int words = 0;
    int i = 0;

    // Input sentence from user
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character until the null terminator '\0'
    while (str[i] != '\0') {
        
        // If current character is a visible character (not space, tab, or newline)
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            
            // Check if it is the start of a word
            // (either it's the very first character, or the previous character was a space/tab)
            if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t') {
                words++;
            }
        }
        i++;
    }

    // Print the final result
    printf("Total number of words: %d\n", words);

    return 0;
}