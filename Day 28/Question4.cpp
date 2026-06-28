#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string phone;
    string email;
};

Contact contacts[100];
int totalContacts = 0;

void addContact() {
    cin.ignore();

    cout << "\nEnter Name: ";
    getline(cin, contacts[totalContacts].name);

    cout << "Enter Phone Number: ";
    getline(cin, contacts[totalContacts].phone);

    cout << "Enter Email: ";
    getline(cin, contacts[totalContacts].email);

    totalContacts++;

    cout << "Contact added successfully!\n";
}

void displayContacts() {
    if (totalContacts == 0) {
        cout << "\nNo contacts available.\n";
        return;
    }

    cout << "\n===== Contact List =====\n";

    for (int i = 0; i < totalContacts; i++) {
        cout << "\nContact " << i + 1 << endl;
        cout << "Name  : " << contacts[i].name << endl;
        cout << "Phone : " << contacts[i].phone << endl;
        cout << "Email : " << contacts[i].email << endl;
        cout << "------------------------\n";
    }
}

void searchContact() {
    cin.ignore();

    string name;
    cout << "\nEnter Name to Search: ";
    getline(cin, name);

    for (int i = 0; i < totalContacts; i++) {
        if (contacts[i].name == name) {
            cout << "\nContact Found!\n";
            cout << "Name  : " << contacts[i].name << endl;
            cout << "Phone : " << contacts[i].phone << endl;
            cout << "Email : " << contacts[i].email << endl;
            return;
        }
    }

    cout << "Contact not found.\n";
}

void deleteContact() {
    cin.ignore();

    string name;
    cout << "\nEnter Name to Delete: ";
    getline(cin, name);

    for (int i = 0; i < totalContacts; i++) {
        if (contacts[i].name == name) {
            for (int j = i; j < totalContacts - 1; j++) {
                contacts[j] = contacts[j + 1];
            }
            totalContacts--;

            cout << "Contact deleted successfully.\n";
            return;
        }
    }

    cout << "Contact not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Contact Management System =====\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Delete Contact\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addContact();
                break;
            case 2:
                displayContacts();
                break;
            case 3:
                searchContact();
                break;
            case 4:
                deleteContact();
                break;
            case 5:
                cout << "Thank You!\n";
                break;
            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 5);

    return 0;
}