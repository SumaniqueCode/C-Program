// Created By Suman Regmi

#include <stdio.h>
#include <conio.h>
void main()
{
  /*To add two numbers*/
  int a, b, sum;
  printf("\nEnter the first number.\n");
  scanf("%d", &a);
  printf("\nEnter the second number.\n");
  scanf("%d", &b);
  sum = a + b;
  printf("%d+%d = %d", a, b, sum);

  /*Same method is used for addition, Subraction, multiplication and division.
    Only the sign and the way of asking user a data is different*/
  getch();
}