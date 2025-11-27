#include <stdio.h>

// Structure definition
struct Book {
    int book_id;
    char title[50];
    char author[50];
    float price;
};
// Function to display book details (structure passed as argument)
void displayBook(struct Book b) {
    printf("\nBook Details:\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);
}
int main() {
    struct Book b1;

    // Read book details
    printf("Enter Book ID: ");
    scanf("%d", &b1.book_id);

    printf("Enter Title: ");
    scanf("%s", b1.title);

    printf("Enter Author: ");
    scanf("%s", b1.author);

    printf("Enter Price: ");
    scanf("%f", &b1.price);

    // Pass structure to function
    displayBook(b1);
    return 0;
}
