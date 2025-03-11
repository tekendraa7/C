#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // Seed for random number
    int secret = rand() % 100 + 1; // Random number between 1-100
    int guess, attempts = 0;

    do {
        printf("Guess the number (1-100): ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secret) {
            printf("Too low! Try again.\n");
        } else if (guess > secret) {
            printf("Too high! Try again.\n");
        } else {
            printf("Correct! You guessed it in %d attempts.\n", attempts);
        }
    } while (guess != secret); // Loop until correct guess

    return 0;
}