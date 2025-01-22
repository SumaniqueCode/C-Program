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
        scanf("%s", name[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i+1; j < n; j++)
        {
            //strcmp compares the ASCII value of first char from both variable.
            //It return 1 if value first variable is greater, -1 if smaller and 0 if equal.
            if (strcmp(name[i], name[j]) > 0) //strcmp and strcpy is given by <string.h> header file
            {
                strcpy(temp, name[i]); //strcpy copies the string values of name[i] in temp variable
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