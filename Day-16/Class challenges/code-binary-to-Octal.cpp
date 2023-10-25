/* 
      Author    :   Parvej Alam
      Date      : 07-10-2k23
*/


// Question 1: Conver the number Binary to Octal (here we we cannot convert the number direct binary to octal, so we need to first convert it into 'Binary to Decimal' and then 'Decimal to Octal'.).

#include<iostream>
using namespace std;

int main() {
  int num, rem, ans = 0, mul = 1;
  cout << "Enter Binary number : ";
  cin >> num;
  int binNum = num;
  // Converting the binary number to decimal
  while(num > 0) {
    rem = num % 10;     // rem
    num = num / 10;     // remaining number
    ans = rem * mul + ans;
    mul *= 2;
  }

  cout << "decimal no. of binary " << binNum << " is : " << ans << endl;

  // Now, we have to convert it the Decimal to Octal. 
  int num_2 = ans;
  int rem_2, ans_2 = 0, mul_2 = 1;

  while(num_2 > 0){
    rem_2 = num_2 % 8;   // rem_2
    num_2 = num_2 / 8;   // num_2

    ans_2 = rem_2 * mul_2 + ans_2;
    mul_2 = mul_2 * 10;
  }

  cout << "Final, Binary to Octal Conversion result = " <<  ans_2;

}


/*  
Output:
-------

Enter Binary number : 1101
decimal no. of binary 1101 is : 13
Final, Binary to Octal Conversion result = 15


*/