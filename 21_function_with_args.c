// Created by Suman Regmi

// Function with arguments but no return value
#include <stdio.h>

void SI(float p, float t, float r) // p, t, r is are parameters here
{
    float result;
    result = (p * t * r) / 100;
    printf("Simple Interest is: %.2f\n", result);
}

void main()
{
    float p, t, r;
    printf("\nTo calculate SI");
    printf("\nEnter Principle: ");
    scanf("%f", &p);
    printf("Enter Time in years: ");
    scanf("%f", &t);
    printf("Enter rate in percent: ");
    scanf("%f", &r);
    SI(p, t, r); // p,t,r is passed as arguments here
}