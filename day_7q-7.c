#include<stdio.h>
int main()
{
    int num, rem, prod = 1;
    // Ask user for input
    printf("Enter any number :");
    scanf("%d", & num);
    // Handle the case if the user enters 0
    if(num == 0)
    {
        prod = 0;
    }
    // Make the number positve if it is negative
    if(num < 0)
    {
        num = -num;
    }
    // Loop to calculate the product of digits
    while(num > 0)
    {
        rem = num % 10;      // Get the last digit
        prod = prod * rem;   // Multiply to the product
        num = num / 10;      // Remove the last digit
    }
    printf("Product of digits = %d\n", prod);
    return 0;
}