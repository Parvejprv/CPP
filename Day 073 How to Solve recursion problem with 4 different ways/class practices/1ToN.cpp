/*  
Topic:
---------
Recursion


Question : print the number from 1 to N using the recursion.

There are 4 differents ways to solve single question.
*/




#include<iostream>
using namespace std;

/* Method: 1. passing two paramter to the function */
/******************************
(num, N)
print(5,5) = 5          - Base case
print(4,5) = 4, print(5,5) => 4, 5
print(3,5) = 3, print(4,5) => 3, 4, 5
print(2,5) = 2, print(3,5) => 2, 3, 4, 5
print(1,5) = 1, print(2,5) => 1, 2, 3, 4, 5

..
...
----------------------------------
print(num, N) = num, print(num+1, N)
----------------------------------

******************************/
void print(int num, int N){
  // Base condition
  if (num == N)
  {
    cout << num ;
    return;
  }
  
  cout << num << " ";
  print(num+1, N);
}

/* Method: 2. passing single param to the function */

void print2(int num){
  // Base case
  if(num == 1){
    cout << num << " "; 
    return;
  }

  print2(num-1);
  cout << num << " ";
}


/* Method: 3. 
  function will get called with n-1 and then goes to print value.*/

/**********************************
 * print(1) = 1
 * print(2) = print(1), 2
 * print(3) = print(2), 3
 * print(4) = print(3), 4
 * print(5) = print(4), 5
 * ----------------------------
 * print(N) = print(N-1), N
 * ----------------------------
**********************************/

void print3(int N){
  // Base case
  if(N == 1){
    cout << N  << " " << endl;
    return;
  }

  print3(N-1);
  cout << N << " ";
}


int main() {
  int n = 5;
  print(1, n);
  cout << endl;
  print2(n);
  cout << endl;
  print3(n);
  cout << endl;

  return 0;
}

/*  
Output:-
-----------

// via passing two param
1 2 3 4 5

// via passing single param, here function get called with it's n-1 value then gonna print the value
1 2 3 4 5

// via method 3
1 2 3 4 5

*/





