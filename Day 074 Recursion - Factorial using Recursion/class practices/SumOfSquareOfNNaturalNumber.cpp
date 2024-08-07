/* 
Topic:-
=========
Recursion



Question: Write a CPP program to find and return the Sum of Square of N Natural numbers, using recursion.


Input: 5
 explanation: 5^2 + 4^2 + 3^2 + 2^2 + 1^2
 => 25 + 16 + 9 + 4 + 1
 => 55 



Input: 4
 explanation:  4^2 + 3^2 + 2^2 + 1^2
 => 16 + 9 + 4 + 1
 => 30


*/

/********************************************
 -> SqSum(1) = 1  => 1^2
 -> SqSum(2) = 2^2 +SqSum(1)   => 2^2 + 1^2
 -> SqSum(3) = 3^2 +SqSum(2)   => 3^2 + 2^2 + 1^2
 -> SqSum(4) = 4^2 +SqSum(3)   => 4^2 + 3^2 + 2^2 + 1^2
 -> SqSum(5) = 5^2 +SqSum(4)   => 5^2 + 4^2 + 3^2 + 2^2 + 1^2

 ..
 ...
---------------------------------------------
SqSum(N) = N^2 + SqSum(N-1)
---------------------------------------------

********************************************/



#include<iostream>
using namespace std;

// a recursive function for SqSum() of N
int sqSum(int N){
  if (N == 1) return 1;

  return N*N + sqSum(N-1);
}

int main() {
  int n;
  cout << "Enter the value N: ";
  cin >> n;
  // recursive function call
  cout << sqSum(n) <<  endl;

  return 0;
}


/*  
Output:-
---------
Enter the value N: 5
55


Enter the value N: 6
91


Enter the value N: 4
30
*/



