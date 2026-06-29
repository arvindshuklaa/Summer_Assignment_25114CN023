#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str, str2;
    int choice;
    bool created = false;

    do {
        cout << "\n===== MENU-DRIVEN STRING OPERATIONS =====\n";
        cout << "1. Enter String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Concatenate Another String\n";
        cout << "6. Compare Two Strings\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore(); // Clear input buffer

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                getline(cin, str);
                created = true;
                cout << "String stored successfully!\n";
                break;

            case 2:
                if (!created) {
                    cout << "Please enter a string first!\n";
                    break;
                }
                cout << "String: " << str << endl;
                break;

            case 3:
                if (!created) {
                    cout << "Please enter a string first!\n";
                    break;
                }
                cout << "Length = " << str.length() << endl;
                break;

            case 4:
                if (!created) {
                    cout << "Please enter a string first!\n";
                    break;
                }
                {
                    string temp = str;
                    reverse(temp.begin(), temp.end());
                    cout << "Reversed String: " << temp << endl;
                }
                break;

            case 5:
                if (!created) {
                    cout << "Please enter a string first!\n";
                    break;
                }
                cout << "Enter another string: ";
                getline(cin, str2);
                cout << "Concatenated String: " << str + str2 << endl;
                break;

            case 6:
                if (!created) {
                    cout << "Please enter a string first!\n";
                    break;
                }
                cout << "Enter another string: ";
                getline(cin, str2);

                if (str == str2)
                    cout << "Both strings are equal.\n";
                else
                    cout << "Strings are not equal.\n";
                break;

            case 7:
                cout << "Exiting Program...\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}
