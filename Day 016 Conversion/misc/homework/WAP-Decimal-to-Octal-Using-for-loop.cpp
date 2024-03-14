/*  
    Author    :     Parvej Alam
    Date      :     07-10-2k23
*/

#include<iostream>
using namespace std;

int main() {
  // Question 1. Write  a Program to convert decimal numbers to octal numbers using a for loop.

  int num;
  int rem, ans = 0, mul = 1;
  cout <<  "Enter a Decimal Number : ";
  cin >> num;

  for(; num > 0; num /= 8) {
    rem = num % 8;
    ans = rem * mul + ans;
    mul *= 10;
  }

  cout << "Octal Number : " << ans << endl;
}



/* 
Output : 
--------

First execution 
****************

Enter a Decimal Number : 13
Octal Number : 15


Second execution 
****************

Enter a Decimal Number : 54
Octal Number : 66


Third execution 
****************

Enter a Decimal Number : 40
Octal Number : 50


*/