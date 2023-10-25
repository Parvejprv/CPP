/*  
        Author      :     Parvej Alam
        Date        :     05-10-2023
*/


// Question :- Power of two, given a number check if the number is the power of two or not, if yes then return 1 and if not then return 0. If number is negative then return 0 immidiately.

#include<iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter the number : ";
  cin >> num;

  // check if the number is negative or zero
  if(num < 1)
  {
    cout << 0;
    return 0;
  }

  // check while num != 1
  while(num != 1) {
    if(num%2 == 1) {
      cout << 0;
      return 0;
    }
    num /= 2;
  }
  cout << 1;
  return 1;
}