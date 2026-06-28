#include <iostream>
#include <string>
using namespace std;

struct Account {
    int accountNumber;
    string name;
    float balance;
};

Account acc;
bool accountCreated = false;

void createAccount() {
    cout << "\nEnter Account Number: ";
    cin >> acc.accountNumber;
    cin.ignore();

    cout << "Enter Account Holder Name: ";
    getline(cin, acc.name);

    cout << "Enter Initial Balance: ";
    cin >> acc.balance;

    accountCreated = true;

    cout << "Account created successfully!\n";
}

void deposit() {
    if (!accountCreated) {
        cout << "Create an account first.\n";
        return;
    }

    float amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    acc.balance += amount;

    cout << "Amount deposited successfully.\n";
}

void withdraw() {
    if (!accountCreated) {
        cout << "Create an account first.\n";
        return;
    }

    float amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > acc.balance)
        cout << "Insufficient Balance!\n";
    else {
        acc.balance -= amount;
        cout << "Withdrawal successful.\n";
    }
}

void checkBalance() {
    if (!accountCreated) {
        cout << "Create an account first.\n";
        return;
    }

    cout << "\n===== Account Details =====\n";
    cout << "Account Number : " << acc.accountNumber << endl;
    cout << "Account Holder : " << acc.name << endl;
    cout << "Balance        : Rs. " << acc.balance << endl;
}

int main() {
    int choice;

    do {
        cout << "\n===== Bank Account System =====\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit Money\n";
        cout << "3. Withdraw Money\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                createAccount();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                checkBalance();
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