#include <stdio.h>

int main() {
    int num1 = 123, num2 = 4567, num3 = 89;

    printf("Without field width:\n");
    printf("%d\n", num1);
    printf("%d\n", num2);
    printf("%d\n", num3);

    printf("\nWith field width:\n");
    printf("%5d\n", num1);  // Minimum width of 5 characters
    printf("%5d\n", num2);  // Minimum width of 5 characters
    printf("%5d\n", num3);  // Minimum width of 5 characters

    printf("\nWith field width and left alignment:\n");
    printf("%-5d\n", num1);  // Minimum width of 5 characters, left-aligned
    printf("%-5d\n", num2);  // Minimum width of 5 characters, left-aligned
    printf("%-5d\n", num3);  // Minimum width of 5 characters, left-aligned

    printf("\nWith field width and zero padding:\n");
    printf("%05d\n", num1);  // Minimum width of 5 characters, zero-padded
    printf("%05d\n", num2);  // Minimum width of 5 characters, zero-padded
    printf("%05d\n", num3);  // Minimum width of 5 characters, zero-padded

    printf("\nWith field width and zero padding and left alignment:\n");
    printf("%-05d\n", num1);  // Minimum width of 5 characters, zero-padded, left-aligned
    printf("%-05d\n", num2);  // Minimum width of 5 characters, zero-padded, left-aligned
    printf("%-05d\n", num3);  // Minimum width of 5 characters, zero-padded, left-aligned

    printf("\nWith field width and precision:\n");
    printf("%5.2d\n", num1);  // Minimum width of 5 characters, precision of 2
    printf("%5.2d\n", num2);  // Minimum width of 5 characters, precision of 2
    printf("%5.2d\n", num3);  // Minimum width of 5 characters, precision of 2  

    printf("\nWith field width and precision and left alignment:\n");
    printf("%-5.2d\n", num1);  // Minimum width of 5 characters, precision of 2, left-aligned
    printf("%-5.2d\n", num2);  // Minimum width of 5 characters, precision of 2, left-aligned
    printf("%-5.2d\n", num3);  // Minimum width of 5 characters, precision of 2, left-aligned   

    return 0;
}