/*  
Question: Perfect sum problem with a non-negative number also.

mean here inside the array element 0 also can be included.

*/
#include<iostream>
using namespace std; 
int subset(int arr[], int index, int n, int target) {
  // Base case
  if(index == n) return target == 0;
  // OR
  // BASE CONDITION
  // if(index == n) {
  //   if(target  == 0) {
  //     return 0;
  //   } else {
  //     return 1;
  //   }
  // }

  return subset(arr, index+1, n, target) + subset(arr, index+1, n, target-arr[index]);
}

int main() {
  // int arr[] = {2, 5, 6, 1};
  // int target = 8;
  int arr[] = {1,0};
  int target = 1;

  int n = sizeof(arr)/sizeof(arr[0]);
  int index = 0;
  int countPerfectSum = subset(arr, index, n, target);

  // let try to find out the target as 8
  cout << "Lets find : " << target << endl;
  cout << countPerfectSum << endl;
}


/*  
Output:-
----------
Lets find : 1
2

Lets find : 2
0

*/