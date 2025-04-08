#include <stdio.h>

#define m 3
#define n 3

int main() {
    // Static 2D arrays
    int a[m][n], b[m][n], c[m][n];
    
    // Pointers to the first element of the matrices
    int (*pA)[n] = a;
    int (*pB)[n] = b;
    int (*pC)[n] = c;

    printf("Enter the first matrix (%d elements): ", m * n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &pA[i][j]);

    printf("Enter the second matrix (%d elements): ", m * n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &pB[i][j]);

    // Matrix addition using pointers
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            pC[i][j] = pA[i][j] + pB[i][j];

    // Display result
    printf("Sum of the two matrices is:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%d\t", pC[i][j]);
        printf("\n");
    }

    return 0;
}