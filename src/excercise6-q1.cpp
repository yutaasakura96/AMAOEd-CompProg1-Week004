/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Right Triangle - WHILE Loop
 * @app desc: Display right triangle using WHILE loop
 * @history:
 *  - 2024/12/06 | Yuta Asakura
 *      -- Created program with nested WHILE loops
 *      -- Outer loop controls rows, inner loop prints asterisks
 ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // ************************** TO DO **************************
   // Place your code logic after this comment line
   // ***********************************************************
 
   int height, row, col;
   
   cout << "Enter the height of the triangle: ";
   cin >> height;
   cout << endl;
   
   row = 1;
   while (row <= height)
   {
       col = 1;
       while (col <= row)
       {
           cout << "*";
           col++;
       }
       cout << endl;
       row++;
   }
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }
