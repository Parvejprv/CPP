/*  
Topic:
---------
Recursion


Question : WAP a CPP to print return the factorial of a number using recursion.

*/

#include<iostream>
using namespace std;
int fact(int N){
  if (N == 1) return 1; 
  
  return N*fact(N-1);
}

int main() {
  int n;
  cout << "Enter the value of N: ";
  cin >> n;
  cout << fact(n) << endl;

}

/*  
Output:-
-----------
Enter the value of N: 5
120

*/





