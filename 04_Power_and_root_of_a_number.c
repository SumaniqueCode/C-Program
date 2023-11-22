// Created by Suman Regmi

#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    /*To calculate the power of a number*/
    int base, exponent, power;
    printf("\nEnter the base value.\n");
    scanf("%d", &base);
    printf("\nEnter the exponent value\n");
    scanf("%d", &exponent);
    power = pow(base, exponent);
    printf("\n%d^%d = %d", base, exponent, power);

    /* TO calculate the square root of a number*/
    float n, s;
    printf("\n\nEnter the number.\n");
    scanf("%f", &n);
    s = sqrt(n);
    printf("\nSquare root of %.2f = %.2f", n, s);
    getch();
}