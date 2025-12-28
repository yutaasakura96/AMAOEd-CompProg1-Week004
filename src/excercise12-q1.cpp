/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Change Value Using Reference
 * @app desc: Change integer value using function with reference parameter
 * @history:
 *  - 2025/12/28 | Yuta Asakura
 *      -- Created program with reference parameter function
 *      -- Changed value from 654,321 to 27,946
 ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 // Function to change the value using reference parameter
 void changeValue(int &value)
 {
   value = 27946;
 }
 
 int main()
 {
   int num = 654321;
   
   cout << "Original value: " << num << endl;
   
   // Call function to change value (no pointers/references in main)
   changeValue(num);
   
   cout << "New value: " << num << endl;
   
   _pause();
   return EXIT_SUCCESS;
 }
 