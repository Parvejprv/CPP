/*  
Question:-
-----------
6. Print the Factorial of a number using function.
*/

#include<iostream>
using namespace std;

int fact(int n) {
  int fact = 1;
  for( int i=1; i<=n; i++) {
    fact = fact*i;
  }
  return fact;
}

// For Calculating the nCr
void combination(int n, int r) {
  int res = fact(n)/(fact(r)*fact(n-r));
  cout << res; 
}

int main() {
  int n, r;
  cout << "enter n and r : ";
  cin >> n >> r;

  // Function call
  combination(n, r);
}



/* 
Output:-
---------

enter n and r : 5 3
10

enter n and r :  6 4
15

*/
