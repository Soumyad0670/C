#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Book {
    char title[100], author[50], publication[100];
    float price;
};
void inputBookData(struct Book *book) {
    printf("Enter title: ");
    fgets(book->title, 100, stdin);
    book->title[strcspn(book->title, "\n")] = 0;
    printf("Enter author: ");
    fgets(book->author, 50, stdin);
    book->author[strcspn(book->author, "\n")] = 0;
    printf("Enter publication: ");
    fgets(book->publication, 100, stdin);
    book->publication[strcspn(book->publication, "\n")] = 0;
    printf("Enter price: ");
    scanf("%f", &book->price);
    getchar(); 
}
void displayAuthorBooks(struct Book *books, int n, char *searchAuthor) {
    int i, found = 0;
    printf("\nBooks by author '%s':\n", searchAuthor);
    printf("------------------------\n");
    for (i = 0; i < n; i++) {
        if (strcmp(books[i].author, searchAuthor) == 0) {
            printf("Title: %s\n", books[i].title);
            printf("Publication: %s\n", books[i].publication);
            printf("Price: %.2f\n", books[i].price);
            printf("------------------------\n");
            found = 1;
        }
    }
    if (!found) {
        printf("No books found for this author.\n");
    }
}
int main() {
    struct Book *books;
    int n, i;
    char searchAuthor[50];
    printf("Enter the number of books: ");
    scanf("%d", &n);
    getchar(); 
    books = (struct Book *)malloc(n * sizeof(struct Book));
    if (books == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Book %d:\n", i + 1);
        inputBookData(&books[i]);
    }
    printf("\nEnter author name to display their books: ");
    fgets(searchAuthor, 50, stdin);
    searchAuthor[strcspn(searchAuthor, "\n")] = 0; 
    displayAuthorBooks(books, n, searchAuthor);
    free(books);
    return 0;
}