/*  
Question :-
-----------
1. Find the Cube of a number using the Function.
*/

#include<iostream>
using namespace std;

// Method to Find the Cube of a number
int Cube(int n) {
  return n*n*n;
}

int main() {
  int num;
  cout << "Enter a number: "; 
  cin >> num;

  // Calling a function
  int cube = Cube(num);
  cout << "Cube = " << cube;
  return 0;
}