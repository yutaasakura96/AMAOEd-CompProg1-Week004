/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Inverted Triangle - DO-WHILE Loop
 * @app desc: Display inverted equilateral triangle using DO-WHILE
 * @history:
 *  - 2024/12/06 | Yuta Asakura
 *      -- Created program with nested DO-WHILE loops
 *      -- Asterisks separated by spaces, no adjacent asterisks
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
   do
   {
       // Print leading spaces (skip for first row)
       if (row > 1)
       {
           col = 1;
           do
           {
               cout << " ";
               col++;
           } while (col < row);
       }
       
       // Print asterisks with spaces
       col = 1;
       do
       {
           cout << "* ";
           col++;
       } while (col <= (height - row + 1));
       
       cout << endl;
       row++;
   } while (row <= height);
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }
