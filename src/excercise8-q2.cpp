/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Display Digits Separately
 * @app desc: Accept 10-99 and display per digit
 * @history:
 *  - 2025/12/27 | Yuta Asakura
 *      -- Created digit separation function
 *      -- Implemented digit display
 ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 // Function to separate and display digits
 void separateDigits(short num)
 {
   int digit1 = num / 10;
   int digit2 = num % 10;
   cout << "Digits: " << digit1 << " " << digit2 << endl;
 }
 
 int main()
 {
   short number;
   
   cout << "Enter a number (10-99): ";
   cin >> number;
   
   if (number >= 10 && number <= 99)
   {
     separateDigits(number);
   }
   else
   {
     cout << "Invalid input! Please enter a number between 10 and 99." << endl;
   }
   
   _pause();
   return EXIT_SUCCESS;
 }
