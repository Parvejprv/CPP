/* 
  Author    :     Parvej Alam
  Date      :     05-10-2k23

*/

// Question:- Decimal to Octal Conversion
#include<iostream>
using namespace std;

int main() {
  int num, rem, ans = 0, mul = 1;
  cout << "Enter the Decimal Number : " << endl;
  cin >> num ;

  while (num > 0) {
    rem = num % 8;
    //cout<<rem<<endl;
    num = num / 8;
    ans = rem * mul + ans;
    mul = mul*10;
  }
  cout << "Decimal to Octal : " << ans << endl;

}