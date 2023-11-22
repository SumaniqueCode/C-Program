// Created By Suman Regmi

#include <stdio.h>
#include <conio.h>
void main()
{
    int i, sum = 0, even, n;
    printf("\nHow many numbers do you want to add?\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("\nThe even number is: %d", i);
            sum = sum + i;
        }
    }
    printf("\nThe sum is: %d", sum);
    getch();
}