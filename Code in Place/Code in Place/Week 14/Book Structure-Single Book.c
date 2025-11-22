#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b1;

    
    strcpy(b1.title, "C Programming");
    strcpy(b1.author, "Dennis Ritchie");
    b1.price = 499.50;


    printf("Book Details:\n");
    printf("Title: %s\n", b1.title);
    printf("Author: %s\n", b1.author);
    printf("Price: %.2f\n", b1.price);

    return 0;
}