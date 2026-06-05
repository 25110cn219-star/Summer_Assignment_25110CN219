#include<stdio.h>
int main()
{
    int n,r,sumDigits=0;
    printf("Enter a number=");
    scanf("%d", &n);
    while(n>0)
    {
        r=n%10;
        sumDigits=sumDigits+r;
        n=n/10;
    }
    printf("Sum of Digits =%d",sumDigits);
    return 0;
}