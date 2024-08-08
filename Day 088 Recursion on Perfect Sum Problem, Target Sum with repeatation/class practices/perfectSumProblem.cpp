/*  
Question: Perfect sum problem
-------------------------------

This Question for Only positive integers only,


*/

#include<iostream>
using namespace std; 
int find(int arr[], int index, int n, int target) {
  // Base case
  if(target == 0) return 1;
  if(index == n || target < 0)  return 0;

  return find(arr, index+1, n, target) + find(arr, index+1, n, target-arr[index]);
}

int main() {
  int arr[] = {2, 5, 6, 1};
  int target = 8;

  int n = sizeof(arr)/sizeof(arr[0]);
  int index = 0;
  int countPerfectSum = find(arr, index, n, target);

  // let try to find out the target as 8
  cout << "Lets try to find the target element as:8" << endl;
  cout << countPerfectSum << endl;
}


/*  
Output:-
---------
Lets try to find the target element as:8
2

*/

