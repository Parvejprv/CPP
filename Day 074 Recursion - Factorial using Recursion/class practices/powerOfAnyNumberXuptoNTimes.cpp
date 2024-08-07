
/*  
Question:- Write a CPP program to print and return the power of any number X upto N times

*/


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
 
 * Now, by the given we will find X to the power of N
 * --------------------------------------
 * Pow(X, N) = x * Pow(X, N-1)
 * --------------------------------------
************************************************/




#include<iostream>
using namespace std;
int pwr(int X, int N){
  if(N == 0) return 1;
  if(N == 1){
    return X;
  }

  return X * pwr(X, N-1);
}

int main() {
  int X, N;
  cout << "Enter number X: ";
  cin >> X;
  cout << "Enter number of times(How many times you want that number) N: ";
  cin >> N;

  cout << pwr(X, N);

  return 0;
}





/*  
Output:-
----------
Enter number X: 2
Enter number of times(How many times you want that number) N: 5
32

Enter number X: 5
Enter number of times(How many times you want that number) N: 3
125

Enter number X: 4
Enter number of times(How many times you want that number) N: 4     
256
*/


