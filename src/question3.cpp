/* ****************************************************************
 * @author: Yuta
 * @app name: Hello World - Six COUT
 * @app desc: Display Hello (1 cout) and World (5 couts)
 * @history:
 *  - 2025/11/15 | Yuta
 *      -- Created program with 1 cout for Hello with endl
 *      -- Created program with 5 couts for World (character by character)
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
 
   cout << "Hello" << endl;     // 1 cout for Hello
   cout << "W";                 // cout #1 for World
   cout << "o";                 // cout #2 for World
   cout << "r";                 // cout #3 for World
   cout << "l";                 // cout #4 for World
   cout << "d" << endl;         // cout #5 for World
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }
