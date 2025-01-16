// Created by Suman Regmi

#include <stdio.h>
void main()
{
    int i, j, k, rowa, columna, rowb, columnb, a[20][20], b[20][20], matrix[20][20], sum[20][20];
    printf("\nEnter the number of rows and columns of first matrix.\n");
    scanf("%d%d", &rowa, &columna);
    printf("\nEnter the numbers to be stored in first matrix\n");
    for (i = 0; i < rowa; i++)
    {
        for (j = 0; j < columna; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter the number of rows and columns of second matrix.\n");
    scanf("%d%d", &rowb, &columnb);
    if (rowa != columnb)
    {
        printf("\nThe column of first matrix should be equal to row of second matrix.\n");
    }
    else
    {
        printf("\nEnter the numbers to be stored in second matrix\n");
        for (i = 0; i < rowb; i++)
        {
            for (j = 0; j < columnb; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf("\nThe matrix to be multiplied are are:\n");
        for (i = 0; i < rowa; i++) // First Matrix
        {
            for (j = 0; j < columna; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for (i = 0; i < rowb; i++) // Second Matrix
        {
            for (j = 0; j < columnb; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        // Declaring the value for sum of multiplied matrix as zero
        for (i = 0; i < rowa; i++)
        {
            for (j = 0; j < rowa; j++)
            {
                sum[i][j] = 0;
            }
        }
        // Matrix Multiplication
        printf("\nThe matrix is calculated as follows:\n");
        for (i = 0; i < rowa; i++)
        {
            for (j = 0; j < rowa; j++)
            {
                for (k = 0; k < rowb; k++)
                {
                    matrix[j][k] = a[i][k] * b[k][j];
                    printf("(%dx%d)", a[i][k], b[k][j]);
                    if (k < rowb - 1) // Avoid printing "+" for the last term
                    {
                        printf("+");
                    }
                    sum[i][j] = sum[i][j] + matrix[j][k];
                }
                printf("\t");
            }
            printf("\n");
        }
        // Displaying Multiplies Matrix
        printf("\nThe multiplication of given matrix is:\n");
        for (i = 0; i < rowa; i++)
        {
            for (j = 0; j < rowa; j++)
            {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    }
}