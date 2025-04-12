/* This program takes a string input from the user and prints the ASCII values of
 all vowels in the string.
 It uses a custom function to check for vowels and print their ASCII values.
 It does not use any standard library functions for string manipulation or
 ASCII conversion.
 */
#include <stdio.h>

void printVowelASCII(char str[])
{
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (str[i] == vowels[j])
            {
                printf("vowel '%c' : ASCII value %d\n", str[i], str[i]);
                break; // Found it's a vowel, no need to check further
            }
        }
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin); // Reads the whole line including spaces
    printVowelASCII(str);
    return 0;
}