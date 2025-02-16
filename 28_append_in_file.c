// Created by Suman Regmi

// To read the text file with data in C
#include <stdio.h>
#include <conio.h>
void main()
{
    FILE *fp;                    // Need to initialize pointer while working with file.
    fp = fopen("test.txt", "a"); // fopen is used to open the file
    // syntax: fopen(filename, mode)
    //  mode: 'a' for append, 'ab' for append in binary,
    //  'a+' for read and append, 'ab+' for read and append in binary,
    if (fp == NULL)
    { // check if file is opened
        printf("Could not open file\n");
        return;
    }
    // writing data to file
    fprintf(fp, "This is added text in test file in append mode.\n");
    fclose(fp); // close the file
}