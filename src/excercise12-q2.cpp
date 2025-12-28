/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Display Variable Addresses
 * @app desc: Display addresses of variable and its reference
 * @history:
 *  - 2025/12/28 | Yuta Asakura
 *      -- Created program to show reference addresses
 *      -- Demonstrated shared addresses and values
 ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   float num;  // Uninitialized variable
   float &ref = num;  // Reference shares same address and value
   
   cout << "Address of num: " << &num << endl;
   cout << "Address of ref: " << &ref << endl;
   cout << "Value of num: " << num << endl;
   cout << "Value of ref: " << ref << endl;
   
   _pause();
   return EXIT_SUCCESS;
 }
 