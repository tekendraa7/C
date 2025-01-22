#include <stdio.h>
#include <string.h>

int main() {
    // Declare and initialize a string
    char str1[50] = "Hello, ";
    char str2[50] = "World!";
    char str3[50];

    // String concatenation
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // String length
    printf("Length of str1: %lu\n", strlen(str1));

    // String copy
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // String comparison
    if (strcmp(str1, str3) == 0) {
        printf("str1 and str3 are equal\n");
    } else {
        printf("str1 and str3 are not equal\n");
    }

    // Finding a character in a string
    char *pos = strchr(str1, 'W');
    if (pos != NULL) {
        printf("Character 'W' found at position: %ld\n", pos - str1);
    } else {
        printf("Character 'W' not found\n");
    }

    // Finding a substring in a string
    char *substr = strstr(str1, "World");
    if (substr != NULL) {
        printf("Substring 'World' found at position: %ld\n", substr - str1);
    } else {
        printf("Substring 'World' not found\n");
    }

    return 0;
}