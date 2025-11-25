/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Enrollment Slip Calculator
 * @app desc: Calculate tuition fee, down payment, and balance based on student information
 * @history:
 *  - 2024/11/24 | Yuta Asakura
 *      -- Created program to calculate enrollment fees
 *      -- Implemented if-else logic for year level and rate determination
 *      -- Added formatted output display
 * ****************************************************************/

 #include <cstdio>
 #include <cstdlib>
 #include <iostream>
 #include <string>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // ************************** Variable Declaration **************************
   string studentName;
   string program;
   int yearLevel;
   double numUnits;
   string yearName;
   double ratePerUnit;
   double tuitionFee;
   double downPayment;
   double balance;
 
   // ************************** Input Section **************************
   cout << "Student Name: ";
   getline(cin, studentName);

   cout << "Program/Course: ";
   getline(cin, program);

   cout << "Year Level: ";
   cin >> yearLevel;

   cout << "No. of Units: ";
   cin >> numUnits;
 
   // ************************** Processing Section **************************
   // Determine year name and rate per unit using if-else
   if (yearLevel == 1) {
    yearName = "Freshman";
    ratePerUnit = 1500;
   } else if (yearLevel == 2) {
    yearName = "Sophomore";
    ratePerUnit = 1800;
   } else if (yearLevel == 3) {
    yearName = "Junior";
    ratePerUnit = 2000;
   } else if (yearLevel == 4 || yearLevel == 5) {
    yearName = "Senior";
    ratePerUnit = 2300;
   }
   // Calculate tuition fee, down payment, and balance
   tuitionFee = numUnits * ratePerUnit;
   downPayment = tuitionFee * 0.3;
   balance = tuitionFee - downPayment;
  
   // ************************** Output Section **************************
   cout << "\n--------------------------------------------------------------------------------\n";
   cout << "\nENROLLMENT SLIP\n\n";
   cout << "Student Name: " << studentName << endl;
   cout << "Program/Course: " << program << endl;
   cout << "Year Name: " << yearName << endl;
   cout << "No. of Units: " << numUnits << endl;
   cout << "Rate Per Unit: " << ratePerUnit << endl;
   cout << "Tuition Fee: " << tuitionFee << endl;
   cout << "Down Payment: " << downPayment << endl;
   cout << "Balance: " << balance << endl;
   
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }
 