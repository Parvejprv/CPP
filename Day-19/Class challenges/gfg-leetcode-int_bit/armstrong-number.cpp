/*  
Question:- WAP for Armstrong number(An Armstrong is a number that is equal to the sum of of its digits raised to the power of the number of digits.)

For example-
153   = 1^3 + 5^3 + 3^3 = 153
371   = 3^3 + 7^3 + 1^3 = 371

Steps to find out Solution-
---------------------------
1. Make a count function & find the number of digits.
2. Find an Armstrong using function
3. Im main function input number and call the count and armstrong function.
4. Check if it is equal or not, print result accordingly.
*/


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

bool Armstrong(int num, int digits) {
  int n = num , rem, ans = 0;

  while(n) {
    rem = n%10;     // rem
    n /= 10;       // reset number
    ans = ans + pow(rem, digits);

    // cout << "remainder " << rem << endl;
    // cout << "num " << n << endl;
    // cout << ans << "\n";
  }
  if(ans==num) 
  return 1;
  else 
  return 0;
}


int main() {
  int num;
  cout << "Enter any three digit number: ";
  cin >> num;

  // Count digits
 int digits = countDigits(num);
 // cout << digits << "\n";

 // Armstrong
 cout<< Armstrong(num, digits);

}

/*  
Output :-
----------

Enter any three digit number: 153
1

Enter any three digit number: 371
1

Enter any three digit number: 8
1

Enter any three digit number: 9
1
*/