#include <stdio.h>

int main() {
    int a, b, c;
    int limit = 30;

    printf("Pythagorean triplets with sides less than or equal to %d:\n", limit);
    for (a = 1; a <= limit; a++) {
        for (b = a; b <= limit; b++) {
            for (c = b; c <= limit; c++) {
                if (a * a + b * b == c * c) {
                    printf("(%d, %d, %d)\n", a, b, c);
                }
            }
        }
    }

    return 0;
}