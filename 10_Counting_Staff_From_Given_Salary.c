// Created By Suman Regmi

#include <stdio.h>
#include <conio.h>
int main()
{
    int i, c = 0, n, a[999];
    printf("\nHow many staffs do you have?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the salary.\n");
        scanf("%d", &a[i]);
        if (a[i] >= 5000 && a[i] <= 10000)
        {
            c++;
        }
    }
    printf("\nThe no of staffs with salary from 5000 to 10000 is: %d", c);
    getch();
}