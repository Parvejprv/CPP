
/*  
Quetion:- Write a code to calculate the cpp, in term of power of 2, using recursion.

ex: 2^5 = 32
*/


// Note:- yaha hum value 2 ki power mein nikal rahe hain
/************************************************
 * Pow(2, 1) = 2    => 2      => N == 1 (Base case)
 * Pow(2, 2) = 2 * Pow(2, 1) => 2*2
 * Pow(2, 3) = 2 * Pow(2, 2) => 2*2*2
 * Pow(2, 4) = 2 * Pow(2, 3) => 2*2*2*2
 * Pow(2, 5) = 2 * Pow(2, 4) => 2*2*2*2*2
 * 
 * --------------------------------------
 * Pow(2, N) = 2 * Pow(2, N-1)
 * --------------------------------------
************************************************/




#include<iostream>
using namespace std;
int pwr(int num, int N){
  if(N == 1){
    return num;
  }

  return num * pwr(num, N-1);
}

int main() {
  int num = 2, N = 5;

  // to calculate the power of 2 till 5 times, call the recursive function
  cout << pwr(num, N);

  return 0;
}

/*  
Output:-
---------
32

*/


