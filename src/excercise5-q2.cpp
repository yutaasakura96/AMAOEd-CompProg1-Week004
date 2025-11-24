/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: SWITCH Statement Selection
 * @app desc: Display messages based on integer input using SWITCH
 * @history:
 *  - 2025/11/24 | Yuta Asakura
 *      -- Created program with SWITCH-CASE structure
 * ****************************************************************/

 #include <cstdio>
 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   int number;
 
   cout << "Enter an integer (0-4): ";
   cin >> number;
 
   switch (number)
   {
     case 0:
       cout << "Hello World" << endl;
       break;
     case 1:
       cout << "I am good" << endl;
       break;
     case 2:
       cout << "To the Top" << endl;
       break;
     case 3:
       cout << "Where is the horizon" << endl;
       break;
     case 4:
       cout << "I do not know" << endl;
       break;
     default:
       cout << "Yeah, I will." << endl;
       break;
   }
 
   _pause();
   return EXIT_SUCCESS;
 }
 