/*  

*/

// Question 258. Add Digits.
/* 
Given an integer num repeatedly add all its digits until the result has only one digit, and return it.

-------------------------------------
|Constraints: 0 <= num <= ((2^31)-1)|
-------------------------------------

Input:
num = 38
Output: 2

Explaination:-
38 => 3 + 8 = 11
11 => 1 + 1 = 2


Input:
num = 62
Output: 8

Explaination:-
62 => 6 + 2 = 8


1. Here  First we need to iterate over the number for 6 7 2 seperately.
2. By taking the mod of 62 we can iterate.

--+--+--
10|62|X
--+--+--
10| 6|2
--+--+--
10| 0|6
--+--+--

here, 6 + 2 = 8

*/

#include<iostream>
using namespace std;

// Declare the function before using it
int addDigits(int num);

int main() {
  int num;
  cout << "Enter number : ";
  cin >> num;

  // call the function to add digits
  int ans = addDigits(num);
  cout << "Result = " << ans << endl;
}


// Define the function
int addDigits(int num) {
  while (num > 9) {
    int rem, ans = 0;
    while(num != 0) {
      rem = num % 10;
      num = num / 10;
      //ans += rem;
      ans = ans + rem;
    }
    num = ans;
  }
    return num;
}



/* 
Output : 
---------


Enter number : 38
Result = 2




Enter number : 26
Result = 8
*/