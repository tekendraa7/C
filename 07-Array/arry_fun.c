#include <stdio.h>

// Function to calculate the average of an array
double calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (double)sum / size;
}

// Function to print the elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int marks[3];

    printf("Enter marks for Physics: ");
    scanf("%d", &marks[0]);

    printf("Enter marks for Chemistry: ");
    scanf("%d", &marks[1]);

    printf("Enter marks for Mathematics: ");
    scanf("%d", &marks[2]);

    printf("Marks entered: ");
    printArray(marks, 3);

    double average = calculateAverage(marks, 3);
    printf("Average marks: %.2lf\n", average);

    return 0;
}