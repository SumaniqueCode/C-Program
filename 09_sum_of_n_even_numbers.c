// Created By Suman Regmi

#include <stdio.h>
#include <conio.h>
void main()
{
    int i,count=1, sum = 0, even, n;
    printf("\nHow many numbers do you want to add?\n");
    scanf("%d", &n);
    for (i = 1; count <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("\nThe even number is: %d", i);
            sum = sum + i;
            count++;
        }
    }
    printf("\nThe sum of first %d even numbers is: %d", n, sum);
    getch();
}