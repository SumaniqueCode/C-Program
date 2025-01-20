// Created by Suman Regmi

//To demonstrate conditional statements

#include <stdio.h>
#include <conio.h>
int main()
{
    /* To find whether the number is even or odd*/
    int a;
    printf("\n \nEnter any number\n");
    scanf("%d", &a);
    if (a == 0) // the if block will run if the condition inside the bracket is true.
    {
        printf("\n%d is neither even nor odd.", a);
        printf("\n%d is neither positive nor negative.", a);
    }
    else // else block will run if condition in if block is false.
    {
        //You can use multiple if statements inside another if statements or else statements.
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