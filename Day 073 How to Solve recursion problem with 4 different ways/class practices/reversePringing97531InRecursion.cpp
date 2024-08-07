/*  
Question: Write a CPP to print the odd number using recursion, and check for Odd number. (Forward dir).

Input: N = 9
Output:-
1,3,5,7,9

Input: N = 12 => N = 11
Output:-
1,3,5,7,9,11


*/






#include<iostream>
using namespace std;
void printOdd(int curr, int N){
  // Base case
  if(curr > N){
    return;
  }

  printOdd(curr+2, N);    // reverse order - 9 7 5 3 1
  cout << curr << " ";
  printOdd(curr+2, N);    // reverse order - 1 3 5 7 9
}
int main() {
  int N;
  cout << "enter the value of N: ";
  cin >> N;

  // Check if number is odd only
  if(N % 2 == 0)
  N--;

  // printOdd()
  printOdd(1, N);

}

/*  
Output:-
----------
enter the value of N: 12
11 9 7 5 3 1

enter the value of N: 19
19 17 15 13 11 9 7 5 3 1

*/