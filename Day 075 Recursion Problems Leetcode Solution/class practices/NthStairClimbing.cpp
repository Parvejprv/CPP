/*  

Question: Write a CPP to find the Nth stair climbing steps, total number of ways to reach at that Nth steps.

*/

#include<iostream>
using namespace std;
// int stairClimbing(int n){
//   if(n == 1) return 1;

//   int first = 1, second = 2, next;
//   for(int i=3; i<=n; i++){
//     next = first + second;
//     first = second;
//     second = next;
//   }

//   return next;
// }

int stairsClimbing(int n){
  if(n <= 1) return 1;

  return stairsClimbing(n-1) + stairsClimbing(n-2);
}

int main() {
  int N;
  cout << "Enter Nth stair value:";
  cin >> N;

  // function call to find out the total number of ways to reach at that Nth stairs,
  // cout << stairClimbing(N) << endl;

  cout << stairsClimbing(N) << endl;

  return 0;
}

/*  
Output:-
---------
Enter Nth stair value:4
5

// Using recursion
Enter Nth stair value:4
5

*/

