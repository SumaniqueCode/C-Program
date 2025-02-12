// Created by Suman Regmi

// To study pointers
#include <stdio.h>
#include <conio.h>
void main()
{
    // variable declaration
    int num = 10;
    // pointer declaration and a ptr variable stores the memory address of num variable
    int *ptr = &num;
    // displaying value of variable
    printf("\n%d", num);
    // displaying the memory address of variable
    printf("\n%p", &num);
    // displaying the memory address of variable with pointer
    printf("\n%p", ptr);
    // displaying the value of variable with pointer
    printf("\n%d", *ptr);
    // displaying memory address of pointer variable
    printf("\n%p", &ptr);
}