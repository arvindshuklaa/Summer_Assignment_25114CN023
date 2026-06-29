#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0;
    int choice, key;
    bool created = false;

    do {
        cout << "\n===== MENU-DRIVEN ARRAY OPERATIONS =====\n";
        cout << "1. Create Array\n";
        cout << "2. Display Array\n";
        cout << "3. Search Element\n";
        cout << "4. Find Maximum Element\n";
        cout << "5. Find Minimum Element\n";
        cout << "6. Find Sum of Elements\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of elements: ";
                cin >> n;
                cout << "Enter " << n << " elements:\n";
                for (int i = 0; i < n; i++) {
                    cin >> arr[i];
                }
                created = true;
                cout << "Array created successfully!\n";
                break;

            case 2:
                if (!created) {
                    cout << "Please create the array first!\n";
                    break;
                }
                cout << "Array Elements: ";
                for (int i = 0; i < n; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;

            case 3:
                if (!created) {
                    cout << "Please create the array first!\n";
                    break;
                }
                cout << "Enter element to search: ";
                cin >> key;
                {
                    bool found = false;
                    for (int i = 0; i < n; i++) {
                        if (arr[i] == key) {
                            cout << "Element found at index " << i << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found)
                        cout << "Element not found.\n";
                }
                break;

            case 4:
                if (!created) {
                    cout << "Please create the array first!\n";
                    break;
                }
                {
                    int max = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] > max)
                            max = arr[i];
                    }
                    cout << "Maximum Element = " << max << endl;
                }
                break;

            case 5:
                if (!created) {
                    cout << "Please create the array first!\n";
                    break;
                }
                {
                    int min = arr[0];
                    for (int i = 1; i < n; i++) {
                        if (arr[i] < min)
                            min = arr[i];
                    }
                    cout << "Minimum Element = " << min << endl;
                }
                break;

            case 6:
                if (!created) {
                    cout << "Please create the array first!\n";
                    break;
                }
                {
                    int sum = 0;
                    for (int i = 0; i < n; i++) {
                        sum += arr[i];
                    }
                    cout << "Sum of Elements = " << sum << endl;
                }
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