/*  
Question : WAP to find the target sum of a given array and target is also given.

*/
#include<iostream>
using namespace std; 
bool find(int arr[], int index, int n, int target) {
  // Base case
  if(target == 0) return 1;
  if(index == n || target < 0)  return 0;

  return find(arr, index+1, n, target) || find(arr, index+1, n, target-arr[index]);
}

int main() {
  int arr[] = {3, 6, 4, 5};
  int target = 19;

  int n = sizeof(arr)/sizeof(arr[0]);
  int index = 0;
  bool isFind = find(arr, index, n, target);

  cout << isFind << endl;

}


/*  
Output:-
---------
// 12
1

// 13
1

// 19
0

*/

