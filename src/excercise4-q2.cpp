/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Daily Budget Squared
 * @app desc: Calculate and display the product of daily budget with itself
 * @history:
 *  - 2025/11/24 | Yuta Asakura
 *      -- Created program to accept daily budget
 *      -- Calculate and display budget squared
 * ****************************************************************/

 #include <cstdio>
 #include <cstdlib>
 #include <iostream>
 #include <iomanip>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // ************************** TO DO **************************
   // Place your code logic after this comment line
   // ***********************************************************
 
   double dailyBudget;
   
   cout << "Enter your daily budget: ";
   cin >> dailyBudget;
   
   double product = dailyBudget * dailyBudget;
   
   cout << fixed << setprecision(2);
   cout << "The product of your daily budget and itself: " << product << endl;
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }
