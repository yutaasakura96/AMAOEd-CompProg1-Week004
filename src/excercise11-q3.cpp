/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Reference to Float Array
 * @app desc: Display address of uninitialized float array using reference
 * @history:
 *  - 2025/12/28 | Yuta Asakura
 *      -- Created program with reference to float array
 *      -- Display logical address
 ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // Declare float array and reference
   float floatArray[20];
   float (&refFloat)[20] = floatArray;
   
   // Display address
   cout << "Array address (via reference): " << &refFloat << endl;
   cout << "Array address (direct): " << floatArray << endl;
   
   _pause();
   return EXIT_SUCCESS;
 }
