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