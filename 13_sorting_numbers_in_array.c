// Created by Suman Regmi

#include <stdio.h>
void main()
{
    int i, j, n, num_arr[50], temp;
    printf("\nHow many numbers do you want to store?\n");
    scanf("%d", &n);
    printf("\nEnter the numbers.\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &num_arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (num_arr[i] > num_arr[j])
            {
                temp = num_arr[i];
                num_arr[i] = num_arr[j];
                num_arr[j] = temp;
            }
        }
    }

    printf("\nThe sorted numbers are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", num_arr[i]);
    }
}