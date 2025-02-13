// Created by Suman Regmi

// To show the relationship of array and pointer
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, num[5] = {1, 3, 5, 7, 9};

    // num is the pointer to first element of array
    printf("\nAddress of first element by array name: %p", num); // prints the address of first element of array
    printf("\nAddress of first element:%p", &num[0]);            // address of first element of array

    // The first element value can directly be accessed using *
    printf("\nFirst element: %d", *num); // prints the value of first element of array

    // using loop to access array using pointer
    printf("\nElements of array using pointer: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", *(num + i)); // prints the value of each element of array
    }
}