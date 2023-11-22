// Created by Suman Regmi

#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char name[30][25], temp[25];
    int i, j, n;
    printf("\nEnter the number of students\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the name\n");
        scanf("%s", &name[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    printf("\nThe sorted names are:");
    for (i = 0; i < n; i++)
    {
        printf("\n%s", name[i]);
    }
    getch();
}