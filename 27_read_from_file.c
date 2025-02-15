// Created by Suman Regmi

// To read the text file with data in C
#include <stdio.h>
void main()
{
    FILE *fp;                    // Need to initialize pointer while working with file.
    char string[100];            // Variable to store string read from file.
    fp = fopen("test.txt", "r"); // fopen is used to open the file
    // syntax: fopen(filename, mode)
    //  mode: 'r' for read, 'rb' for read in binary,
    //  'r+' for read and write, 'rb+' for read and write in binary,
    if (fp == NULL)
    { // check if file is opened
        printf("Could not open file\n");
        return;
    }
    // reading single data from file
    fgets(string, sizeof(string), fp); //sizeof(variable) returns the size of variable
    puts(string); // printing string
    fclose(fp);           // close the file
}