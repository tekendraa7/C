// This program demonstrates the use of nested structures in C.
#include <stdio.h>

// Nested structure
struct Date {
    int day;
    int month;
    int year;
};

struct Book {
    char title[100];
    float price;
    struct Date pubDate; // Nested structure
};

// Function to display book info
void displayBook(struct Book b) {
    printf("\nTitle: %s\n", b.title);
    printf("Price: %.2f\n", b.price);
    printf("Publication Date: %02d-%02d-%04d\n", b.pubDate.day, b.pubDate.month, b.pubDate.year);
}

int main() {
    struct Book b1;

    // Taking input
    printf("Enter book title: ");
    scanf(" %[^\n]", b1.title);
    printf("Enter price: ");
    scanf("%f", &b1.price);
    printf("Enter publication date (DD MM YYYY): ");
    scanf("%d %d %d", &b1.pubDate.day, &b1.pubDate.month, &b1.pubDate.year);

    // Display using function
    displayBook(b1);

    return 0;
}
