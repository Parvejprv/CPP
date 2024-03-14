/*  
      Author    :     Parvej Alam
      Date      :     07-10-2k23
*/

// Binary to decimal conversion
#include<iostream>
using namespace std;

int main() {
  int num, rem, ans = 0, mul = 1;
  cout << "Enter a binary number: ";
  cin >> num ;

  while (num > 0) {
    rem = num % 10;
    num = num / 10;
    ans = rem * mul + ans;
    mul = mul*2;
  }

  cout << "Binary to Decimal is : " << ans << endl;
}



/*  
Output:-

first time execution-

Enter a binary number: 1101
Binary to Decimal is : 13


second time execution-

Enter a binary number: 10000
Binary to Decimal is : 16


*/