/*  
    Author    :     Parvej Alam
    Date      :     07-10-2k23
*/

#include<iostream>
using namespace std;

int main() {
  // Question 1. Write  a Program to convert binary numbers to decimal numbers using a for loop.

  int num;
  int rem, ans = 0, mul = 1;
  cout <<  "Enter a Binary Number : ";
  cin >> num;

  for(; num > 0; num /= 10) {
    rem = num % 10;
    ans = rem * mul + ans;
    mul *= 2;
  }

  cout << "Decimal Number : " << ans << endl;
}



/* 
Output : 
--------

First execution 
****************

Enter a Binary Number : 1101
Decimal Number : 13


Second execution 
****************

Enter a Binary Number : 100000 
Decimal Number : 32


Third execution 
****************

Enter a Binary Number : 1000000
Decimal Number : 64


*/