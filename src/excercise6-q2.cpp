/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Right Triangle - FOR Loop
 * @app desc: Display right triangle with height at right using FOR loop
 * @history:
 *  - 2024/12/06 | Yuta Asakura
 *      -- Created program with nested FOR loops
 *      -- First inner loop prints spaces, second prints asterisks
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
   
   for (row = 1; row <= height; row++)
   {
       // Print spaces
       for (col = 1; col <= (height - row); col++)
       {
           cout << " ";
       }
       
       // Print asterisks
       for (col = 1; col <= row; col++)
       {
           cout << "*";
       }
       
       cout << endl;
   }
 
   // ********************** DO NOT CHANGE **********************
   // Print a new line and ask user for any key before exiting
   // ***********************************************************
   _pause();
   return EXIT_SUCCESS;
 }
