/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Seat Reservation System
 * @app desc: Theater seat reservation using 2D array (7 cols x 5 rows)
 * @history:
 *  - 2025/12/27 | Yuta Asakura
 *      -- Created seat reservation program with 7x5 2D array
 *      -- Implemented seat selection and validation
 *      -- Added error handling for invalid and taken seats
 *      -- Continuous loop for multiple reservations
 * ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
     // ************************** TO DO **************************
     // Declare 2D array for seats (5 rows x 7 columns)
     // ***********************************************************
     
     int seats[5][7];
     int seatNumber;
     int row, col;
     bool validSeat;

     // Initialize seats with seat numbers 1-35
     int seatCounter = 1;
     for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            seats[i][j] = seatCounter;
            seatCounter++;
        }
     }
     // Continuous loop for seat reservation
     while (true) {
        // Display current seat layout
        cout << "\n";
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 7; j++) {
                if (seats[i][j] == 0) {
                    cout << "0 ";
                } else {
                    cout << seats[i][j] << " ";
                }
            }
            cout << "\n";
        }
         
         // Ask user to enter seat number
         cout << "\nEnter seat number to reserve: ";
         cin >> seatNumber;
         
         // Validate seat number (must be between 1 and 35)
         if (seatNumber < 1 || seatNumber > 35) {
            cout << "Error: Invalid seat number. Please enter a number between 1 and 35.\n";
            continue;
         }

         // Find the seat in the 2D array
         validSeat = false;
         for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 7; j++) {
                if (seats[i][j] == seatNumber) {
                    row = i;
                    col = j;
                    validSeat = true;
                    break;
                }
            }
            if (validSeat) break;
         }
         
         // Check if seat is already reserved (value is 0)
         if (validSeat && seats[row][col] == 0) {
            cout << "Seat is taken.\n";
         } else if (validSeat) {
         // Reserve the seat by setting it to 0
         seats[row][col] = 0;
         cout << "Seat successfully reserved.\n";
         } else {
            cout << "Error: Seat not found.\n";
         }
         
    }
         // ********************** DO NOT CHANGE **********************
         // Print a new line and ask user for any key before exiting
     // ***********************************************************
     _pause();
     return EXIT_SUCCESS;
 }