#include <iostream>
#include <string>
using namespace std;

struct Ticket {
    string name;
    int seatNo;
    bool booked;
};

Ticket seats[10];

void initializeSeats() {
    for (int i = 0; i < 10; i++) {
        seats[i].seatNo = i + 1;
        seats[i].booked = false;
    }
}

void displaySeats() {
    cout << "\n===== Seat Status =====\n";
    for (int i = 0; i < 10; i++) {
        cout << "Seat " << seats[i].seatNo << " : ";
        if (seats[i].booked)
            cout << "Booked";
        else
            cout << "Available";
        cout << endl;
    }
}

void bookTicket() {
    int seat;
    cout << "\nEnter Seat Number (1-10): ";
    cin >> seat;

    if (seat < 1 || seat > 10) {
        cout << "Invalid Seat Number!\n";
        return;
    }

    if (seats[seat - 1].booked) {
        cout << "Seat already booked!\n";
        return;
    }

    cin.ignore();
    cout << "Enter Customer Name: ";
    getline(cin, seats[seat - 1].name);

    seats[seat - 1].booked = true;

    cout << "Ticket booked successfully!\n";
}

void cancelTicket() {
    int seat;
    cout << "\nEnter Seat Number to Cancel: ";
    cin >> seat;

    if (seat < 1 || seat > 10) {
        cout << "Invalid Seat Number!\n";
        return;
    }

    if (!seats[seat - 1].booked) {
        cout << "Seat is already available.\n";
        return;
    }

    seats[seat - 1].booked = false;
    seats[seat - 1].name = "";

    cout << "Ticket cancelled successfully!\n";
}

void bookingDetails() {
    cout << "\n===== Booking Details =====\n";

    bool found = false;

    for (int i = 0; i < 10; i++) {
        if (seats[i].booked) {
            cout << "Seat No : " << seats[i].seatNo << endl;
            cout << "Name    : " << seats[i].name << endl;
            cout << "-----------------------\n";
            found = true;
        }
    }

    if (!found)
        cout << "No tickets booked yet.\n";
}

int main() {
    initializeSeats();

    int choice;

    do {
        cout << "\n===== Ticket Booking System =====\n";
        cout << "1. Display Available Seats\n";
        cout << "2. Book Ticket\n";
        cout << "3. Cancel Ticket\n";
        cout << "4. Booking Details\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displaySeats();
                break;
            case 2:
                bookTicket();
                break;
            case 3:
                cancelTicket();
                break;
            case 4:
                bookingDetails();
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