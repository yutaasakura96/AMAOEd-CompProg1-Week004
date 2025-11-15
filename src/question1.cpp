/* ****************************************************************
 * @author: Yuta
 * @app name: Hello World - Two COUT
 * @app desc: Display Hello and World using 2 cout statements
 * @history:
 *  - 2025/11/15 | Yuta
 *      -- Created program with two cout statements
 *      -- Added endl to display on separate lines
 * ****************************************************************/

 #include <cstdio>
 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // ************************** TO DO **************************
   // Place your code logic after this comment line
   // ***********************************************************
 
   cout << "Hello" << endl;
   cout << "World" << endl;
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }