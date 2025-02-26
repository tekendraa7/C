#include <stdio.h>

int main() {
    char ch;
    char str[100];

    // Using getchar() and putchar()
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    putchar('\n');

    // Using fgets() and puts()
    printf("Enter a string: ");
    // fgets reads up to sizeof(str) - 1 characters and adds a null terminator
    fgets(str, sizeof(str), stdin);
    printf("You entered: ");
    puts(str);

    return 0;
}