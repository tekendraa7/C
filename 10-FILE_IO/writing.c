// This program demonstrates how to write and append strings to a file in C.
// It uses the `fgets` function to read a string from the standard input
// and the `fputs` function to write it to a file. The program first opens
#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char str[60];

    // Open file in write mode
    fp = fopen("file.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    printf("Writing some string to file:\n");
    fgets(str, sizeof(str), stdin); // Correct usage of fgets
    fputs(str, fp);
    fclose(fp);

    // Open file in append mode
    fp = fopen("file.txt", "a");
    if (fp == NULL) {
        printf("Error opening file for appending.\n");
        return 1;
    }
    printf("Appending some string to file:\n");
    fgets(str, sizeof(str), stdin); // Correct usage of fgets
    fputs(str, fp);
    fclose(fp);

    return 0;
}