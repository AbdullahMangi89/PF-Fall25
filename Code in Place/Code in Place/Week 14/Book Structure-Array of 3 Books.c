#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book books[3];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]", books[i].title);  

        printf("Author: ");
        scanf(" %[^\n]", books[i].author);

        printf("Price: ");
        scanf("%f", &books[i].price);
    }

   
    printf("\n\n--- Book Details ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title : %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price : %.2f\n", books[i].price);
    }

    return 0;
}