/*  
Question :- Take 4 integer number A, B, C, D input from the keyword or user and Check if number is in pair or not. If it is in pair then return 1 otherwise return 0.
*/

#include<iostream>
using namespace std;

// Function to check whether all numbers are equals or not
int CheckNumbers(int a, int b, int c, int d) {
  if(a == b && c == d) 
  return 1;
  if(a == c && b == d) 
  return 1;
  if(a == d && b == c)
  return 1;
  return 0;
}

int main() {
  int A, B, C, D;
  cout << "Enter the  number A, B, C, D : ";
  cin >> A >> B >> C >> D;

  // Call a function, to chek
  int valCheck = CheckNumbers(A, B, C, D);
  cout << valCheck;
  return 0;
}