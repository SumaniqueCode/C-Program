// Created by Suman Regmi

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    printf("\nEnter any key to exit  ");
    int x;
    x = getch(); // hold the screen and takes input
    if (x < 255)
    { // ASCII convets range from 0 to 255
        printf("\nSUCCESS");
        exit(0);
    }
    else
    {
        printf("FAILED");
        exit(1);
    }
}