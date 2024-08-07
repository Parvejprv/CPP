/*  
Topic:
---------
Recursion


Question : print the number from 1 to N using the recursion.

*/

#include<iostream>
using namespace std;
void print(int num, int N){
  if (num == N)
  {
    cout << num ;
    return;
  }
  
  cout << num << " ";
  print(num+1, N);
}

int main() {
  int n = 5;
  print(1, n);

  return 0;
}

/*  
Output:-
-----------
1 2 3 4 5

*/





