// Created by Suman Regmi

#include <stdio.h>
#include <conio.h>
int main()
{
    /* To find whether the number is even or odd*/
    int a;
    printf("\n \nEnter any number\n");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("\n%d is neither even nor odd.", a);
        printf("\n%d is neither positive nor negative.", a);
    }
    else
    {
        if (a % 2 == 0)
        {
            printf("\n%d is even number.", a);
        }
        else
        {
            printf("\n%d is odd number.", a);
        }

        /* To find whether the number is positive or negative*/
        if (a > 0)
        {
            printf("\n%d is positive number.", a);
        }
        else
        {
            printf("\n%d is negative number.", a);
        }
    }
    getch();
}