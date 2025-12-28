/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Pointer to Character Array
 * @app desc: Display address of uninitialized character array
 * @history:
 *  - 2025/12/28 | Yuta Asakura
 *      -- Created program with pointer to char array
 *      -- Display logical address using casting
 ****************************************************************/
    
 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // Declare character array and pointer
   char charArray[10];
   char *ptrChar;
   
   // Point to array
   ptrChar = charArray;
   
   // Display address (need casting to void* to show address)
   cout << "Array address (as void*): " << static_cast<void*>(ptrChar) << endl;
   cout << "Array address (direct): " << static_cast<void*>(charArray) << endl;
   
   _pause();
   return EXIT_SUCCESS;
 }
