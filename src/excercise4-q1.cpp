/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Display User's Section
 * @app desc: Accept and display user's section
 * @history:
 *  - 2025/11/24 | Yuta Asakura
 *      -- Created program to accept section input
 *      -- Display section with format
 * ****************************************************************/

 #include <cstdio>
 #include <cstdlib>
 #include <iostream>
 #include <string>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // ************************** TO DO **************************
   // Place your code logic after this comment line
   // ***********************************************************
 
   string section;
   
   cout << "Enter your section: ";
   getline(cin, section);
   
   cout << "*** Section: " << section << " ***" << endl;
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }