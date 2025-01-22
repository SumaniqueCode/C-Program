// Created by Suman Regmi

// Function with arguments and return value

#include <stdio.h>

float area(float r) // r is argument. This function returns the value of data type float so data type of funtion is float
{
    float a;
    a = (22 / 7) * (r * r);
    return a; // a is return type here
}

float circumference(float r)
{
    float c;
    c = 2 * (22 / 7) * r;
    return c;
}

void display(float a, float c); // This function does not return the value so data type of funtion is void

void main()
{
    float r;
    printf("\nEnter the radius of circle: ");
    scanf("%f", &r);
    display(area(r), circumference(r)); // r is passed as parameter here
}

 // The functions can also be defined at the top and later the statements can be written at he bottom
 // You need to define at the top to make it callable
void display(float a, float c){
    printf("\nThe area of circle is %.2f.", a);
    printf("\nThe circumference of circle is %.2f", c);
}