/*  
    Author    :     Parvej Alam
    Date      :     07-10-2k23
*/

#include<iostream>
using namespace std;

int main() {
  // Question 1. Write  a Program to convert decimal numbers to binary numbers using a for loop.

  int num;
  int rem, ans = 0, mul = 1;
  cout <<  "Enter a Decimal Number : ";
  cin >> num;

  for(; num > 0; num /= 2) {
    rem = num % 2;
    ans = rem * mul + ans;
    mul *= 10;
  }

  cout << "Binary Number : " << ans << endl;
}



/* 
Output : 
--------

First execution 
****************

Enter a Decimal Number : 13
Binary Number : 1101


Second execution 
****************

Enter a Decimal Number : 32
Binary Number : 100000 


Third execution 
****************

Enter a Decimal Number : 64
Binary Number : 1000000


*/