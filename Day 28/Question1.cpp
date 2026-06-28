#include <iostream>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool issued;
};

Book library[100];
int totalBooks = 0;

void addBook() {
    cout << "\nEnter Book ID: ";
    cin >> library[totalBooks].id;
    cin.ignore();

    cout << "Enter Book Title: ";
    getline(cin, library[totalBooks].title);

    cout << "Enter Author Name: ";
    getline(cin, library[totalBooks].author);

    library[totalBooks].issued = false;
    totalBooks++;

    cout << "Book added successfully!\n";
}

void displayBooks() {
    if (totalBooks == 0) {
        cout << "\nNo books available.\n";
        return;
    }

    cout << "\n===== Library Books =====\n";

    for (int i = 0; i < totalBooks; i++) {
        cout << "\nBook ID : " << library[i].id;
        cout << "\nTitle   : " << library[i].title;
        cout << "\nAuthor  : " << library[i].author;
        cout << "\nStatus  : ";

        if (library[i].issued)
            cout << "Issued";
        else
            cout << "Available";

        cout << "\n--------------------------";
    }
}

void searchBook() {
    int id;
    cout << "\nEnter Book ID to search: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) {
        if (library[i].id == id) {
            cout << "\nBook Found!";
            cout << "\nTitle : " << library[i].title;
            cout << "\nAuthor: " << library[i].author;
            cout << "\nStatus: ";

            if (library[i].issued)
                cout << "Issued";
            else
                cout << "Available";

            return;
        }
    }

    cout << "Book not found.\n";
}

void issueBook() {
    int id;
    cout << "\nEnter Book ID to issue: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) {
        if (library[i].id == id) {
            if (library[i].issued)
                cout << "Book already issued.\n";
            else {
                library[i].issued = true;
                cout << "Book issued successfully.\n";
            }
            return;
        }
    }

    cout << "Book not found.\n";
}

void returnBook() {
    int id;
    cout << "\nEnter Book ID to return: ";
    cin >> id;

    for (int i = 0; i < totalBooks; i++) {
        if (library[i].id == id) {
            if (!library[i].issued)
                cout << "Book is already available.\n";
            else {
                library[i].issued = false;
                cout << "Book returned successfully.\n";
            }
            return;
        }
    }

    cout << "Book not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Library Management System =====";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Issue Book";
        cout << "\n5. Return Book";
        cout << "\n6. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                cout << "Thank you!\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}