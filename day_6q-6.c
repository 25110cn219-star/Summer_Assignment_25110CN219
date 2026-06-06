#include<stdio.h>
int main()
{
    int num, reverse = 0, remainder ;
    printf("Enetr an integer:");
    scanf("%d", &num);
    while(num != 0)
    {
        remainder = num % 10;               // Get the last digit
        reverse = reverse * 10 +remainder;  //Append it to the reversed number
        num/= 10;                           //Remove the last digit
    }
    printf("Reversed number =  %d\n",reverse);
    return 0;
}