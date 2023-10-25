/*  
    Author    :     Parvej Alam
    Date      :     07-10-2k23
*/

#include<iostream>
using namespace std;

int main() {
  // Question 1. Write  a Program to convert octal numbers to binary numbers using a for loop | while loop.


  // Octal to Decimal
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

  // Decimal to Binary
  int num_2 = ans;
  int rem_2, ans_2 = 0, mul_2 = 1;

  for(; num_2 > 0; num_2 /= 2) {
    rem_2 = num_2 % 2;
    ans_2 = rem_2 * mul_2 + ans_2;
    mul_2 *= 10;
  }

  cout << "Final Result as a, Binary Number : " << ans_2 << endl;

}



/* 
Output : 
--------

First execution 
****************

Enter a Octal Number : 15
Decimal Number : 13
Final Result as a, Binary Number : 1101


Second execution 
****************

Enter a Octal Number : 40
Decimal Number : 32
Final Result as a, Binary Number : 100000


Third execution 
****************

Enter a Octal Number : 100
Decimal Number : 64
Final Result as a, Binary Number : 1000000


*/