// Created by Suman Regmi

// To create the text file with data in C
#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp;                    // Need to initialize pointer while working with file.
    fp = fopen("test.txt", "w"); // fopen is used to open the file
    // syntax: fopen(filename, mode)
    //  mode: 'w' for write, 'wb' for write in binary,
    //  'w+' for read and write, 'wb+' for read and write in binary,
    if (fp == NULL)
    { // check if file is opened
        printf("Could not open file\n");
        return;
    }
    // writing data to file
    fprintf(fp, "Hello, World!\n");
    fprintf(fp, "This is a test file.\n");
    fclose(fp); // close the file
}