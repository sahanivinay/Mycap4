#include<stdio.h>
// Function to check sum of digit using recursion
int sum(int num)
{
    if (num == 0)
       return 0;
    return (num % 10 + sum(num/ 10));
}
// Driven Program to check above
int main()
{
    int num;
    printf("Enter the digits to get sum: ");
    scanf("%d",&num);
    int result = sum(num);
    printf("\nSum of digits in %d is %d\n", num, result);
    return 0;
}
