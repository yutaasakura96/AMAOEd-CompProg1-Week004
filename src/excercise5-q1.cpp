/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: IF Statement Selection
 * @app desc: Display messages based on integer input using IF
 * @history:
 *  - 2025/11/24 | Yuta Asakura
 *      -- Created program with IF-ELSE IF chain
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
 
   if (number == 0)
   {
     cout << "Hello World" << endl;
   }
   else if (number == 1)
   {
     cout << "I am Groot" << endl;
   }
   else if (number == 2)
   {
     cout << "To the Top" << endl;
   }
   else if (number == 3)
   {
     cout << "Where is the horizon" << endl;
   }
   else if (number == 4)
   {
     cout << "I do not know" << endl;
   }
   else
   {
     cout << "Yeah, I will." << endl;
   }
 
   _pause();
   return EXIT_SUCCESS;
 }
 