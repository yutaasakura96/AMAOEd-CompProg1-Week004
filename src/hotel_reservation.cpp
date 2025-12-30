/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Hotel Reservation System
 * @app desc: Calculate hotel reservation costs based on guests and days
 * @history:
 *  - 2024/12/28 | Yuta Asakura
 *      -- Created program to handle hotel reservations
 *      -- Implemented guest-based rate calculation
 *      -- Added age validation (18+)
 *      -- Calculated total payment, down payment, and balance
 * ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include <string>
 #include "_pause.h"

 using namespace std;

 int main(){
    string customerName;
    int age;
    int numberOfGuests; 
    double numberOfDays;
    double dailyRate;
    double totalPayment;
    double downPayment;
    double balance;

    cout << "Enter your name: ";
    getline(cin, customerName);
    cout << "Enter your age: ";
    cin >> age;

    if (age < 18) {
        cout << "Error: You are not eligible to reserve a hotel room." << endl;
        _pause();
        return EXIT_FAILURE;
    }

    cout << "Enter the number of guests: ";
    cin >> numberOfGuests;
    cout << "Enter the number of days: ";
    cin >> numberOfDays;

    if (numberOfGuests == 1) {
        dailyRate = 1000;
    } else if (numberOfGuests == 2) {
        dailyRate = 1800;
    } else if (numberOfGuests == 3) {
        dailyRate = 2700;
    } else if (numberOfGuests == 4) {
        dailyRate = 3600;
    } else {
        dailyRate = 4500;
    }

    totalPayment = numberOfDays * dailyRate;
    downPayment = totalPayment * 0.4;
    balance = totalPayment - downPayment;

    cout << "==================================================" << endl;
    cout << "              HOTEL RESERVATION SYSTEM" << endl;
    cout << "==================================================" << endl << endl;
    cout << "Customer Name: " << customerName << endl;
    cout << "Age: " << age << endl;
    cout << "Number of Guests: " << numberOfGuests << endl;
    cout << "Number of Days: " << numberOfDays << endl;
    cout << "Daily Rate: " << dailyRate << endl;
    cout << "Total Payment: " << totalPayment << endl;
    cout << "Down Payment: " << downPayment << endl;
    cout << "Balance: " << balance << endl;

    _pause();
    return EXIT_SUCCESS;
 }