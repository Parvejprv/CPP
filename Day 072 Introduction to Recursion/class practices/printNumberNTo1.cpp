/*  

Topic:-
============

Recursion:-
============
- A Function which calls itself again and again is known as recursive function, and that process called recursion.
- Untill the specific condition met.

Recusion said that,
===================
- If you have a large | huge problem then break them into sub-problems.
- If you are able to solve one of them then remaining problem will gonna solve itself.




Question: print the number from n to 1 using recursion.
*/


#include<iostream>
using namespace std;
void print(int n){
  // Base
  if(n == 1){
    cout << n << " ";
    return;
  }

  cout << n << " ";
  print(n-1);   // called itself
}

int main() {
  int n;
  cout << "enter the value of n: ";
  cin >> n;

  // recursive function call
  print(n);

  return 0;
}






/*  
Output:-
----------
enter the value of n: 5
54321

*/


