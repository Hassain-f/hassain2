 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    char title[100];
    char author[50];
    float price;
};
int main() {
    struct Book *book;
    book = (struct Book *)malloc(sizeof(struct Book));
    if (book == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter book title: ");
    scanf("%s", book->title);
    printf("Enter author name\n: ");
    scanf("%s\n", book->author);
    printf("Enter book price: ");
    scanf("%f", &book->price);
    printf("\nBook Details:\n");
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Price: %.2f\n", book->price);
    free(book);

    return 0;
}

