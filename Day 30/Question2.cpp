#include <stdio.h>
#include <string.h>

int main() {
    int choice, n = 0, i, searchId;
    int bookId[100];
    char title[100][50];
    char author[100][50];

    while (1) {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("\nEnter Book ID: ");
            scanf("%d", &bookId[n]);

            printf("Enter Book Title: ");
            scanf(" %[^\n]", title[n]);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", author[n]);

            n++;
            printf("Book added successfully!\n");
            break;

        case 2:
            if (n == 0) {
                printf("\nNo books available!\n");
            } else {
                printf("\n----- Library Books -----\n");
                printf("ID\tTitle\t\tAuthor\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\n",
                           bookId[i], title[i], author[i]);
                }
            }
            break;

        case 3:
            printf("\nEnter Book ID to search: ");
            scanf("%d", &searchId);

            for (i = 0; i < n; i++) {
                if (bookId[i] == searchId) {
                    printf("\nBook Found!\n");
                    printf("Book ID : %d\n", bookId[i]);
                    printf("Title   : %s\n", title[i]);
                    printf("Author  : %s\n", author[i]);
                    break;
                }
            }

            if (i == n)
                printf("Book not found!\n");

            break;

        case 4:
            printf("Thank you for using Mini Library System!\n");
            return 0;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}