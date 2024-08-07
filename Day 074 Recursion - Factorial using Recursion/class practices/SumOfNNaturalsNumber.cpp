/*  
Question : Sum of N natural numbers, using recursion.

*/

/*  
Topic:
---------
Recursion


Question:- 
============
WAP a CPP to print and return the sum of n natural numbers using recursion.

*/

#include<iostream>
using namespace std;
int sumOfNNaturalNumber(int N){
  if (N == 1 ) return 1; 
  
  return N + sumOfNNaturalNumber(N-1);
}

int main() {
  int n;
  cout << "Enter the value of N: ";
  cin >> n;

  if(n < 0){
    cout << "Natural Number cann't be negative!";
    return 0;
  }
  cout << sumOfNNaturalNumber(n) << endl;

}

/*  
Output:-
-----------
Enter the value of N: 10
55

Enter the value of N: 5
15

Enter the value of N: -10
Natural Number cann't be negative!

Enter the value of N: 6
21
*/








