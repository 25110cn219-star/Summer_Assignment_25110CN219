#include <stdio.h>

#define MAX_SIZE 100

int main() {
    char str[MAX_SIZE];
    int length = 0;
    int start, end;
    char temp;

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

    // 2. Reverse the string using two-pointer approach
    start = 0;
    end = length - 1;

    while (start < end) {
        // Swap characters
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move pointers towards the center
        start++;
        end--;
    }

    // 3. Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}