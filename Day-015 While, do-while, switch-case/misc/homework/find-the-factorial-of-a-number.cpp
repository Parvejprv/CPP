/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

*/

// Write a Program to take input number from the user and print the factorial of a number.
#include<iostream>
using namespace std;

int main() {
  int n, fact = 1;
  cout <<  "enter n : ";
  cin >>n ;
  int i = 1;
  while ( i <= n) {
    fact = fact * i;
    i++;
  }
  cout << "Factorial = " << fact;

}


/* 
Output:-
--------

enter n : 5
Factorial = 120


*/