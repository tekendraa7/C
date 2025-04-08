#include <stdio.h>
#include <stdlib.h>

// Function to multiply matrices using pointers
void multiplyMatrices(int *mat1, int *mat2, int *result, int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            *(result + i * c2 + j) = 0;
            for (int k = 0; k < c1; k++) {
                *(result + i * c2 + j) += *(mat1 + i * c1 + k) * (*(mat2 + k * c2 + j));
            }
        }
    }
}

// Function to display matrix
void displayMatrix(int *mat, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", *(mat + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &r2, &c2);

    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of first must equal rows of second.\n");
        return 1;
    }

    // Allocate memory for matrices
    int *mat1 = (int *)malloc(r1 * c1 * sizeof(int));
    int *mat2 = (int *)malloc(r2 * c2 * sizeof(int));
    int *result = (int *)malloc(r1 * c2 * sizeof(int));

    printf("Enter elements of first matrix:\n");
    for (int i = 0; i < r1 * c1; i++) {
        scanf("%d", mat1 + i);
    }

    printf("Enter elements of second matrix:\n");
    for (int i = 0; i < r2 * c2; i++) {
        scanf("%d", mat2 + i);
    }

    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, r1, c1, c2);

    printf("Resultant matrix after multiplication:\n");
    displayMatrix(result, r1, c2);

    // Free allocated memory
    free(mat1);
    free(mat2);
    free(result);

    return 0;
}