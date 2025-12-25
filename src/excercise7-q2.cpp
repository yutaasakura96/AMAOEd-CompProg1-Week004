/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Equilateral Triangle Pattern
 * @app desc: Display triangle pattern using character array
 * @history:
 *  - 2024/12/25 | Yuta Asakura
 *      -- Created program with nested loops
 *      -- Limited to 4 variables as required
 * ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // Variables: chars array, height, i, j (4 variables total)
   string chars[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
   int height;
   int i;
   int j;
 
   // Input validation loop
   do
   {
     cout << "Enter triangle height (1-10): ";
     cin >> height;
     if (height < 1 || height > 10)
     {
       cout << "Invalid! Height must be between 1 and 10." << endl;
     }
   } while (height < 1 || height > 10);
 
   // Display triangle
   cout << "\nEquilateral Triangle:" << endl;
   for (i = 0; i < height; i++)
   {
     // Print leading spaces
     for (j = 0; j < height - i - 1; j++)
     {
       cout << " ";
     }
 
     // Print characters
     for (j = 0; j <= i; j++)
     {
       cout << chars[i] << " ";
     }
 
     cout << endl;
   }
 
   _pause();
   return EXIT_SUCCESS;
 }
 