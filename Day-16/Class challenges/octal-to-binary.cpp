/* 
      Author    :   Parvej Alam
      Date      : 07-10-2k23
*/


// Question 1: Convert the number Octal to Binary (here we we cannot convert the number direct Octal to Binary, so we need to first convert it into 'Octal to Decimal' and then 'Decimal to Binary').

#include<iostream>
using namespace std;

int main() {
  int num, rem, ans = 0, mul = 1;
  cout << "Enter Octal number : ";
  cin >> num;
  int binNum = num;
  // 'Octal to Decimal'
  while(num > 0) {
    rem = num % 10;     // rem
    num = num / 10;     // remaining number
    ans = rem * mul + ans;
    mul *= 8;
  }

  cout << "'Octal to Decimal' = " << ans << endl;

  // Now, 'Decimal to Binary' 
  int num_2 = ans;
  int rem_2, ans_2 = 0, mul_2 = 1;

  while(num_2 > 0){
    rem_2 = num_2 % 2;   // rem_2
    num_2 = num_2 / 2;   // num_2

    ans_2 = rem_2 * mul_2 + ans_2;
    mul_2 = mul_2 * 10;
  }

  cout << "Here is the Final Result, 'Decimal to Binary' = " <<  ans_2;

}



/* 
Output :
--------

Enter Octal number : 15
'Octal to Decimal' = 13
Here is the Final Result, 'Decimal to Binary' = 1101

*/