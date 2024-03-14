/* 
  Author    :     Parvej Alam
  Date      :     05-10-2k23

*/

// Question:- Decimal to binary conversion of a number 13


#include<iostream>
using namespace std;

int main() {
  // Decimal to binary conversion
  cout<<"Enter the decimal value: ";
  int dec_val;
  cin >> dec_val;       // 13
  int num = dec_val;
  int rem, ans = 0, mul = 1;

  // method 1.
  // while(dec_val > 0) {
  //   // Reminder
  //   rem = dec_val % 2;        // 1, 0, 1, 1
  //   // cout <<  "Reminder is : " << rem << endl;
  //   dec_val = dec_val / 2;    // dec_val
  //   // cout <<  "dec_val is : " << dec_val << endl;    // 6, 3, 1, 0
  //   ans = rem*mul + ans;
  //   mul = mul*10;   
  // }

  // cout << "Binary Conversion of " << num << " (decimal) is "  << ans << " (binary)" << endl;


  // Using Operators
  while(dec_val > 0) {
    // Reminder
    rem = dec_val & 1;        // 1, 0, 1, 1
    cout <<  "Reminder is : " << rem << endl;
    dec_val = dec_val >> 1;    // dec_val
    // cout <<  "dec_val is : " << dec_val << endl;    // 6, 3, 1, 0
    ans = rem*mul + ans;
    mul = mul*10;   
  }

  cout << "Binary Conversion of " << num << " (decimal) is "  << ans << " (binary)" << endl;
}





