#include<stdio.h>
int main()
{
    int num,i;
    // ask user for the number
    printf("enter an integer:");
    scanf("%d", &num);
    printf("multiplication table for %d:\n",num);
    // loop to print the table upto 10
    for(i=1;i<=10;++i)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}