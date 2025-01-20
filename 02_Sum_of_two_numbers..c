// Created By Suman Regmi

/*Program to add two numbers*/
#include <stdio.h>
#include <conio.h>
void main()
{
  int a, b, sum; //defining the variable with data types.
  printf("\nEnter the first number.\n");
  scanf("%d", &a); //Taking the input from the user
  printf("\nEnter the second number.\n");
  scanf("%d", &b);
  sum = a + b;
  printf("%d+%d = %d", a, b, sum);

  /*Same method is used for addition, Subraction, multiplication and division.
    Only the sign and the way of asking user a data is different*/
  getch();
}