#include <stdio.h>

int main()
{
    char ch;
    char str[100];

    // Using getchar() and putchar()
    printf("Enter a character: ");
    ch = getchar();
    printf("You entered: ");
    putchar(ch);
    putchar('\n');

    return 0;
}