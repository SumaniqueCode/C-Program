// Created by Suman Regmi

// To create the text file with data in C
#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp; // Need to initialize pointer while working with file.
    char name[20], address[50], command;
    int class, roll, age;
    fp = fopen("student.txt", "a+"); // fopen is used to open the file
    // syntax: fopen(filename, mode)
    //  mode: 'r' for read, 'w' for write, 'a' for append,
    //  'r+', 'w+', 'a+' for read and write
    if (fp == NULL)
    { // check if file is opened
        printf("Could not open file\n");
        return;
    }
    // Loop for storing multiple data in file
    do
    {
        printf("\nEnter your name: ");
        gets(name);
        printf("\nEnter your address: ");
        gets(address);
        printf("\nEnter your class: ");
        scanf("%d", &class);
        printf("\nEnter your roll: ");
        scanf("%d", &roll);
        printf("\nEnter your age: ");
        scanf("%d", &age);
        // fprintf is used to write data in file
        fprintf(fp, "Name: %s\nAddress: %s\nClass: %d\nRoll : %d\nAge : % d\n\n ", name, address, class, roll, age);
        printf("\nDo you want to enter another student? (y/n): ");
        scanf(" %c", &command);
    } while (command == 'Y' || command == 'y');
    fclose(fp); // close the file
}