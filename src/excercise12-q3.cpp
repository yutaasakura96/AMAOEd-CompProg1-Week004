/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Display String Using Pointer
 * @app desc: Display text using pointer to string literal
 * @history:
 *  - 2025/12/28 | Yuta Asakura
 *      -- Created program with pointer to string literal
 *      -- Displayed "This is it!" without direct assignment
 ****************************************************************/

 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // Pointer to string literal (no character assignment to variable)
   const char *message = "This is it!";
   
   cout << message << endl;
   
   _pause();
   return EXIT_SUCCESS;
 }
 