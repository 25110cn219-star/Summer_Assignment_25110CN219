#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int length = 0;
    int isPalindrome = 1; // 1 means true, 0 means false

    // Input string from user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // 1. Calculate string length and remove trailing newline
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // 2. Check palindrome using two-pointer approach
    int start = 0;
    int end = length - 1;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = 0; // Characters mismatch
            break;
        }
        start++;
        end--;
    }

    // 3. Print the final result
    if (isPalindrome) {
        printf("The string is a PALINDROME.\n");
    } else {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}