/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Division Operation with Functions
 * @app desc: Divide six integers using a function
 * @history:
 *  - 2025/12/27 | Yuta Asakura
 *      -- Created division function
 *      -- Implemented three division operations
 ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 // Function to divide two integers
 int divide(int a, int b)
 {
   return a / b;
 }
 
 int main()
 {
   int num1, num2, num3, num4, num5, num6;
   int result1, result2, result3;
   
   cout << "Enter first dividend: ";
   cin >> num1;
   cout << "Enter first divisor: ";
   cin >> num2;
   
   cout << "Enter second dividend: ";
   cin >> num3;
   cout << "Enter second divisor: ";
   cin >> num4;
   
   cout << "Enter third dividend: ";
   cin >> num5;
   cout << "Enter third divisor: ";
   cin >> num6;
   
   result1 = divide(num1, num2);
   result2 = divide(num3, num4);
   result3 = divide(num5, num6);
   
   cout << "\nResults:\n";
   cout << num1 << " / " << num2 << " = " << result1 << endl;
   cout << num3 << " / " << num4 << " = " << result2 << endl;
   cout << num5 << " / " << num6 << " = " << result3 << endl;
   
   _pause();
   return EXIT_SUCCESS;
 }
