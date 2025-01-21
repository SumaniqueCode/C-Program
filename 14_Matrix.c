// Created by Suman Regmi

#include <stdio.h>
void main()
{
    //To declare multi-dimensional array you need to have to square brackets after the variable name.
    //The value inside the first bracket is row length and the second value is column length.
    int i, j, row, column, matrix[20][20];
    printf("\nEnter the number of rows and columns.\n");
    scanf("%d%d", &row, &column);
    printf("\nEnter the numbers to be stored in matrix\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nThe elements of matrix are:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}