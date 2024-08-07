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

  cout << curr << " ";
  printOdd(curr+2, N);
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
enter the value of N: 9
1 3 5 7 9

enter the value of N: 12
1 3 5 7 9 11

*/
































/*  
Solution 1. print even from reverse order, using recursion.

*/

/*  


#include<iostream>
using namespace std;
void printOdd(int N){
  // Base case
  if(N == 1){
    cout << N << " ";
    return;
  }

  printOdd(N-2);
  cout << N << " ";
}
int main() {
  int N;
  cout << "enter the value of N: ";
  cin >> N;

  // Check if number is odd only
  if(N % 2 == 0)
  N--;

  // printOdd()
  printOdd(N);

}

*/




/*  
Output:-
----------
enter the value of N: 19
1 3 5 7 9 11 13 15 17 19

enter the value of N: 9
1 3 5 7 9

enter the value of N: 14
1 3 5 7 9 11 13

*/



