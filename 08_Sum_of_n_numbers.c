// Created By Suman Regmi

#include <stdio.h>
#include <conio.h>
void main()
{
    /* To find the sum of given n number of numbers*/
    int i = 0, sum = 0, n, a;
    printf("\nHow many numbers do want to add ?\n");
    scanf("%d", &n);
    while (i < n)
    {
        printf("Enter the number to be added\n");
        scanf("%d", &a);
        sum = sum + a;
        i++;
    } 
    printf("The sum of given number is: %d", sum);
    getch();
}