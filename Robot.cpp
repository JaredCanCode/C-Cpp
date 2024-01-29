/*Odd Or Even Program Using Functions

A formal definition of an even number is that it is an integer of the form n = 2k, where k is an integer;[3] it can then be shown that an odd number is an integer*\ of the form n = 2k + 1.

/*## Odd Or Even Example Program Using Functions In C++*/

#include <iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

string odd_even(int i);

int main() {
   // Declare Variables
   int number;

   cout << "Simple C++ Program : Odd Or Even Example Program Using Functions\n";

   //Read Value
   cout << "\nEnter an integer : ";
   cin>>number;

   //Call Function and Print Result
   cout << "\n\nResult : " << odd_even(number);

   getch();
   return (0);
}

string odd_even(int number) {
   if (number % 2 == 0) {
      return "your number is even number";
   } else {
      return "your number is odd number";
   }
}

