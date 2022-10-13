// Created by Suman Regmi

#include <stdio.h>
#include <conio.h>
int main()
{
    /* To find whether the number is even or odd*/
    int a;
    printf("\n \nEnter any number \n");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is even number", a);
    }
    else
    {
        printf("%d is odd number", a);
    }

    /* To find whether the number is positive or negative*/
    int b;
    printf("\n \nEnter any number \n");
    scanf("%d", &b);
    if (b > 0)
    {
        printf("%d is positive number", b);
    }
    else
    {
        printf("%d is negative number", b);
    }
    getch();
}