/*  
    Author    :     Parvej Alam
    Date      :     07-10-2k23
*/

#include<iostream>
using namespace std;

int main() {
  // Question 1. Write  a Program to convert octal numbers to decimal numbers using a for loop.

  int num;
  int rem, ans = 0, mul = 1;
  cout <<  "Enter a Octal Number : ";
  cin >> num;

  for(; num > 0; num /= 10) {
    rem = num % 10;
    ans = rem * mul + ans;
    mul *= 8;
  }

  cout << "Decimal Number : " << ans << endl;
}



/* 
Output : 
--------

First execution 
****************

Enter a Octal Number : 54
Decimal Number : 44


Second execution 
****************

Enter a Octal Number : 60
Decimal Number : 48


Third execution 
****************

Enter a Octal Number : 49
Decimal Number : 41


*/