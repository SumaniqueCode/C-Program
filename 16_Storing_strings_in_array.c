// Created by Suman Regmi

#include <stdio.h>
void main()
{
    int n, i;
    char name[20][30]; // First for array length and second is for string lenth
    printf("\nHow many names do you want to store?\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the name:\t");
        scanf("%s", name[i]);
    }
    printf("\nThe stored names are\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%d. %s\n", i + 1, name[i]);
    }
}