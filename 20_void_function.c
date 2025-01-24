// Created by Suman Regmi

// Function with no arguments and no return value
#include <stdio.h>

void sum() // This function does not return the value so data type of funtion is void
{
    int a, b;
    printf("\nEnter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d", a, b, a + b);
}

void main()
{
    printf("\nTo calculate sum of two numbers using function.");
    sum();
}