/*  
Topic:
Recursion

link : GFG
Question : Way to sum N




*/


#include<iostream>
using namespace std;
int way(int arr[], int m, int sum) {
  // Base case
  if(sum == 0) return 1;

  // if sum would be negative then return and no value can be
  if(sum < 0) return 0;

  int ans = 0;
  for(int i=0; i<m; i++){
    ans += way(arr, m, sum-arr[i]);
  }
  return ans;
}

int main() {
  int arr[] = {1, 5, 6};
  int m = sizeof(arr)/sizeof(arr[0]);
  int sum = 7;

  cout << way(arr, m, sum) << endl;

  return 0;
}


/*  
Output:-
----------
6

*/








