/*  
    Author    :     Parvej Alam
    Date      :     
*/

/* 
231. Power of Two
Given a integer number n, return true if it is a power of two, Otherwise return false.

An Integer number n is a power of two, if there exist an integer x such that n==2^x.

Example:
Input : 1
Output : true
Explanation : (2^0) = 1

Example:
Input: n= 16
Output: true
Explaination: 2^4 = 16
*/

#include<iostream>
using namespace std;
bool isPowerOfTwo(int num);   //function definition
int main() {
  int num ;
  cout <<  "Enter number : ";
  cin >>num;

  bool ans = isPowerOfTwo(num);
  cout << ans;
}

bool isPowerOfTwo(int num){
  if(num < 1) {
    return 0;
  }
  while(num != 1) {
    if(num%2 == 1) {
      return 0;
    }
    num = num / 2;
  }
  return 1;
}


/* 
Output:
-------

Enter number : 3
0

Enter number : 1
1

Enter number : 4
1

Enter number : 8
1
*/