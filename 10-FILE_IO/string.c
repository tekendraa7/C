//Reading from file using fgets() function
#include <stdio.h>
#include <string.h>
int main() {
    FILE *fp;
    char str[20];
    fp = fopen("file.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    // Read a line from the file
    while (fgets(str, 3, fp) != NULL) {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}