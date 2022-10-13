// Created By Suman Regmi

#include <stdio.h>
#include <conio.h>
int main()
{
    /* To find factorial of given numbers */
    int a;
    long int fact = 1;
    printf(" \n \n Enter any any number \n");
    scanf("%d", &a);
    while (1 <= a)
    {
        fact = fact * a;
        a--;
    }
    printf("\n The factorial is : %d", fact);

    getch();
}