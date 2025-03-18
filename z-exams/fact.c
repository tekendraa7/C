#include <stdio.h>

int main() {
    int i, n, fact=1, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact *= i;
        sum += fact;
    }
    printf("Sum of factorials of numbers from 1 to %d is %d\n", n, sum);    
    return 0;
}