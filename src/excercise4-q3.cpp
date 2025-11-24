/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: User Information Display
 * @app desc: Accept name, password, address and display formatted output
 * @history:
 *  - 2025/11/24 | Yuta Asakura
 *      -- Created program with 3 variables
 *      -- Accept user information with space support
 *      -- Display formatted message
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
 
   string name, password, address;
   
   cout << "Enter your name: ";
   getline(cin, name);
   
   cout << "Enter your password: ";
   getline(cin, password);
   
   cout << "Enter your address: ";
   getline(cin, address);
   
   cout << "Hi, I am " << name << ". I live at " << address << "." << endl;
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }