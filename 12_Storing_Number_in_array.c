// Created by Suman Regmi

#include <stdio.h>
void main()
{
    int i, num, arr[100];
    printf("\nHow many numbers do you want to store in array?\n");
    scanf("%d", &num);
    printf("\nEnter %d numbers to store in the array.\n", num);
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe numbers stored in array are: \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\t", arr[i]);
    }
}