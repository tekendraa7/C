#include <stdio.h>

int main() {
    char input_char;
    int input_num, result;
    int choice = 1; // Force switch to execute addition case

    printf("Enter a character: ");
    scanf(" %c", &input_char);
    
    printf("Enter an integer: ");
    scanf("%d", &input_num);

    switch(choice) {
        case 1: // Addition case
            result = (int)input_char + input_num;
            printf("Result: %c (ASCII %d) + %d = %d\n", 
                   input_char, input_char, input_num, result);
            break;
        default:
            printf("Invalid operation!\n");
    }

    return 0;
}