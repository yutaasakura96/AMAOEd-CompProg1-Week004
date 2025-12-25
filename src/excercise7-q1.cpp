/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Display Five Integers
 * @app desc: Accept and display 5 integers using array
 * @history:
 *  - 2024/12/25 | Yuta Asakura
 *      -- Created program with array and loop
 *      -- Limited to 2 variables as required
 * ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // Variables: numbers array and loop counter i (2 variables total)
   int numbers[5];
   int i;
 
   // Input 5 integers
   cout << "Enter 5 integers:" << endl;
   for (i = 0; i < 5; i++)
   {
     cout << "Integer " << (i + 1) << ": ";
     cin >> numbers[i];
   }
 
   // Display all 5 integers
   cout << "\nThe five integers you entered are:" << endl;
   for (i = 0; i < 5; i++)
   {
     cout << "Integer " << (i + 1) << ": " << numbers[i] << endl;
   }
 
   _pause();
   return EXIT_SUCCESS;
 }
 