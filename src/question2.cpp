/* ****************************************************************
 * @author: Yuta
 * @app name: Hello World - Ten COUT
 * @app desc: Display Hello and World using 10 cout statements
 * @history:
 *  - 2025/11/15 | Yuta
 *      -- Created program with ten cout statements
 *      -- Used endl after Hello for new line
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
 
     // "Hello" using 5 cout statements
     cout << "H";        // 1
     cout << "e";        // 2
     cout << "l";        // 3
     cout << "l";        // 4
     cout << "o" << endl; // 5 (end first line)
 
     // "World" using 5 cout statements
     cout << "W";        // 6
     cout << "o";        // 7
     cout << "r";        // 8
     cout << "l";        // 9
     cout << "d" << endl; // 10 (end second line)
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }