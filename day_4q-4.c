#include<stdio.h>
#include<math.h> // Required for the log10 and abs functions
int main()
{
    long long num;
    int count;
    //Prompt user for input 
    printf("Enter an integer: ");
    scanf("%lld", &num);
    // Handle the special case for 0
    if(num==0)
    {
        count = 1;
    }
    else{
        // Use log10 on the absolute (positive) value of the number
        // log10(x) + 1 gives the total number of the digits
    count = (int)log10(llabs(num)) + 1;
    }
    // Display the result
    printf("The number of digits is: %d\n", count);
    return 0;
}