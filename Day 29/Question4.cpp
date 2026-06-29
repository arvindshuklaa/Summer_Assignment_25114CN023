#include <iostream>
#include <string>
using namespace std;

struct Product {
    int id;
    string name;
    int quantity;
    float price;
};

int main() {
    Product products[100];
    int count = 0;
    int choice;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Display All Products\n";
        cout << "3. Search Product\n";
        cout << "4. Update Quantity\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter Product ID: ";
                cin >> products[count].id;

                cout << "Enter Product Name: ";
                cin.ignore();
                getline(cin, products[count].name);

                cout << "Enter Quantity: ";
                cin >> products[count].quantity;

                cout << "Enter Price: ";
                cin >> products[count].price;

                count++;
                cout << "Product added successfully!\n";
                break;

            case 2:
                if (count == 0) {
                    cout << "No products available.\n";
                } else {
                    cout << "\nID\tName\t\tQuantity\tPrice\n";
                    cout << "---------------------------------------------\n";
                    for (int i = 0; i < count; i++) {
                        cout << products[i].id << "\t"
                             << products[i].name << "\t\t"
                             << products[i].quantity << "\t\t"
                             << products[i].price << endl;
                    }
                }
                break;

            case 3: {
                int searchId;
                bool found = false;

                cout << "Enter Product ID to search: ";
                cin >> searchId;

                for (int i = 0; i < count; i++) {
                    if (products[i].id == searchId) {
                        cout << "\nProduct Found:\n";
                        cout << "ID: " << products[i].id << endl;
                        cout << "Name: " << products[i].name << endl;
                        cout << "Quantity: " << products[i].quantity << endl;
                        cout << "Price: " << products[i].price << endl;
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Product not found.\n";

                break;
            }

            case 4: {
                int updateId;
                bool found = false;

                cout << "Enter Product ID: ";
                cin >> updateId;

                for (int i = 0; i < count; i++) {
                    if (products[i].id == updateId) {
                        cout << "Enter New Quantity: ";
                        cin >> products[i].quantity;
                        cout << "Quantity updated successfully!\n";
                        found = true;
                        break;
                    }
                }

                if (!found)
                    cout << "Product not found.\n";

                break;
            }

            case 5:
                cout << "Exiting Inventory Management System...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}