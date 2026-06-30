#include <stdio.h>
#include <stdbool.h> // Required for boolean data type (true/false)

// Function to check if a number is a palindrome
bool isNumberPalindrome(int num) {
    int reversed = 0;
    int remainder;
    int original = num;

    // Negative numbers are not palindromes (e.g., -121 reversed is 121-)
    if (num < 0) {
        return false;
    }

    // Mathematical approach to reverse the number
    while (num != 0) {
        remainder = num % 10;                // Get the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed number
        num /= 10;                           // Remove the last digit
    }

    // Return true if original and reversed numbers are identical
    return (original == reversed);
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Call the function and print the result
    if (isNumberPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    return 0;
}