#include <stdio.h>
#include <string.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int N;

    printf("Enter the number of books: ");
    scanf("%d", &N);

    struct Book books[N];

    for (int i = 0; i < N; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);

        getchar();

        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0;

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;  

        printf("Price: ");
        scanf("%f", &books[i].price);
        
        getchar();
    }

    printf("\nDetails of all books:\n");
    for (int i = 0; i < N; i++) {
        printf("\nBook %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}
