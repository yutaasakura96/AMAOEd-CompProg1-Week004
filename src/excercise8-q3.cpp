/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Nth Fibonacci Number
 * @app desc: Generate and display nth Fibonacci number
 * @history:
 *  - 2025/12/27 | Yuta Asakura
 *      -- Created Fibonacci function
 *      -- Implemented iterative algorithm
 ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 // Function to generate nth Fibonacci number
 int fibonacci(int n)
 {
   if (n <= 2)
   {
     return 1;
   }
   
   int a = 1, b = 1, c;
   
   for (int i = 3; i <= n; i++)
   {
     c = a + b;
     a = b;
     b = c;
   }
   
   return b;
 }
 
 int main()
 {
   int n, result;
   
   cout << "Enter which Fibonacci number to display (n): ";
   cin >> n;
   
   if (n > 0)
   {
     result = fibonacci(n);
     cout << "The " << n << "th Fibonacci number is: " << result << endl;
   }
   else
   {
     cout << "Invalid input! Please enter a positive number." << endl;
   }
   
   _pause();
   return EXIT_SUCCESS;
 }
