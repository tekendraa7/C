#include <stdio.h>
#include <ctype.h> // For tolower() and isalpha()

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert to lowercase to simplify case checks
    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a vowel.\n", ch);
            break;
        default:
            if (isalpha(ch)) {
                printf("%c is a consonant.\n", ch);
            } else {
                printf("Not a letter!\n");
            }
    }
    return 0;
}