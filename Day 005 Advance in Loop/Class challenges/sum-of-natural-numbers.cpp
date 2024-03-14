/* 
(1). Write a Program to print the sum of n natural number.
*/

#include<iostream>
using namespace std;

int main() {

  // (a).
  // int n, sum;
  // cout << "enter n:";
  // cin >> n; sum = 0;
  // for(int i=1; i<=n; i++) {
  //   sum = sum + i;
  // }
  // cout << "sum: " << sum;

  // (b). Alternate method with Formula that will save times and memory.
  int n;
  cout << "enter n ";
  cin >> n;
  cout << "\nsum is "<<((n*(n+1))/2);
}