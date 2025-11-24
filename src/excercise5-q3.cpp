/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Floating Point Division
 * @app desc: Divide two floating point numbers with error handling
 * @history:
 *  - 2025/11/24 | Yuta Asakura
 *      -- Created program with division by zero check
 * ****************************************************************/

 #include <cstdio>
 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   float num1, num2, result;
 
   cout << "Enter first floating point number: ";
   cin >> num1;
 
   cout << "Enter second floating point number: ";
   cin >> num2;
 
   if (num2 == 0)
   {
     cout << "Error: Division by zero is undefined" << endl;
   }
   else
   {
     result = num1 / num2;
     cout << "Result: " << result << endl;
   }
 
   _pause();
   return EXIT_SUCCESS;
 }
 