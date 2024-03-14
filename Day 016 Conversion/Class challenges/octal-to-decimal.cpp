/* 
  Author    :     Parvej Alam
  Date      :     05-10-2k23

*/

// Question:- Octal to Decimal Conversion
#include<iostream>
using namespace std;

int main() {
  int num, rem, ans = 0, mul = 1;
  cout << "Enter the Octal Number : " << endl;
  cin >> num ;

  while (num > 0) {
    // Mod with 10
    rem = num % 10;
    //cout<<rem<<endl;
    // Divide with 10
    num = num / 10;
    ans = rem * mul + ans;
    mul = mul*8;
    //cout << mul << " ";
  }
  cout << "Octal to Decimal : " << ans << endl;

}

/* 
Output:-
---------

Enter the Octal Number : 
150
Octal to Decimal : 104


*/