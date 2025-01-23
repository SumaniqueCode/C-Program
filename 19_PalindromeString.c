// Created by Suman Regmi

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100], rev[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    for (i = strlen(str) - 1; i >= 0; i--)
    {
        str[i] = tolower(str[i]); //tolower is given by <ctype.h> header file. It gives the character in lowercase
        rev[count] = str[i];
        count++;
    }
    rev[count] = '\0'; // Null-terminate the reversed string
    printf("Original string: %s\nReversed string: %s", str, rev);
    if (strcmp(str, rev) == 0)
    {
        printf("\nString is a palindrome");
    }
    else
    {
        printf("\nString is not a palindrome");
    }
    return 0;
}
