// Created by Suman Regmi

// To calculate the factorial of any number using recursion
#include <stdio.h>

int fact(int n)
{
    int result = 1;
    if (n <= 0)
    {
        result = 1;
    }
    else
    {
        result = n * fact(n - 1); //The function calls itself.
    }
    return result;
}

void main()
{
    int n, result;
    printf("\nEnter any number: ");
    scanf("%d", &n);
    result = fact(n);
    printf("\nThe factorial of %d is %d.\n", n, result);
}