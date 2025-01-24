// Created By Suman regmi

//To demonstrate switch statements

#include <stdio.h>
#include <stdlib.h>
void main()
{
    int choice = 0;
    float a, b, sum, sub, mul, div;
    do
    {
    printf("\n1. Add \t2. Subtract \t3. Muntiply \t4. Divide \t5. Exit");
    printf("\nEnter Your choice:\n");
    scanf("%d", &choice);
    switch (choice)
    {// switch block starts here
    case 1: //if user clicks 1, this block will run
        printf("\nEnter the number to be added:\n");
        scanf("%f%f", &a, &b);
        sum = a + b;
        printf("\nThe sum of given two number is %.2f\n", sum);
        break; //terminates the programs
    case 2:
        printf("\nEnter the number to be subtracted :\n");
        scanf("%f%f", &a, &b);
        sub = a - b;
        printf("\nThe subtraction of given two number is %.2f\n", sub);
        break;
    case 3:
        printf("\nEnter the number to be muntiplied:\n");
        scanf("%f%f", &a, &b);
        mul = a * b;
        printf("\nThe multiplication of given two number is %.2f\n", mul);
        break;
    case 4:
        printf("\nEnter the number to be divided:\n");
        scanf("%f%f", &a, &b);
        div = a / b;
        printf("\nThe division of given two number is %.2f\n", div);
        break;
    case 5:
        printf("\nThe program is exited successfully\n");
        break;
    default: //If none of the cases matches, default block will run
        printf("\nPlease Enter the number from 1 to 5\n");
        break;
    } //switch block ends here
    } while (choice!=5); //The switch block will run in loop until user clicks 5 as a choice.
}