/* ****************************************************************
 * @author: Yuta Asakura
 * @app name: Ascending Sort
 * @app desc: Sort 6 integers in ascending order using bubble sort
 * @history:
 *  - 2024/12/25 | Yuta Asakura
 *      -- Created program with bubble sort algorithm
 *      -- Limited to 4 variables as required
 * ****************************************************************/

 #include <cstdio>
 #include <cstdlib>
 #include <iostream>
 #include "_pause.h"
 
 using namespace std;
 
 int main()
 {
   // Variables: numbers array, i, j, temp (4 variables total)
   int numbers[6];
   int i;
   int j;
   int temp;
 
   // Input 6 integers
   cout << "Enter 6 integers:" << endl;
   for (i = 0; i < 6; i++)
   {
     cout << "Integer " << (i + 1) << ": ";
     cin >> numbers[i];
   }
 
   // Bubble Sort Algorithm
   for (i = 0; i < 5; i++)
   {
     for (j = 0; j < 5 - i; j++)
     {
       if (numbers[j] > numbers[j + 1])
       {
         // Swap elements
         temp = numbers[j];
         numbers[j] = numbers[j + 1];
         numbers[j + 1] = temp;
       }
     }
   }
 
   // Display sorted array
   cout << "\nSorted in ascending order:" << endl;
   for (i = 0; i < 6; i++)
   {
     cout << numbers[i] << " ";
   }
   cout << endl;
 
   _pause();
   return EXIT_SUCCESS;
 }
 