/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Pointer to Integer
 * @app desc: Display value and address of an integer variable
 * @history:
 *  - 2025/12/28 | Yuta Asakura
 *      -- Created program with pointer to integer
 *      -- Display value and logical address
 ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // Declare integer variable and pointer
   int number;
   int *ptrNumber;
   
   // Initialize variable
   number = 900;
   ptrNumber = &number;
   
   // Display value and address
   cout << "Value: " << number << endl;
   cout << "Address: " << &number << endl;
   
   _pause();
   return EXIT_SUCCESS;
 }
