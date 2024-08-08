
/*  
Question: Find the minimum element of the integer array using recursion.

*/

#include<iostream>
using namespace std;
int minElement(int arr[], int index, int n){

  if(index == n-1)
  return arr[index];


  return min(arr[index], minElement(arr, index+1, n));
}

int main() {
  int arr[5] = {3, 7, 6, 2, 8};
  int n = sizeof(arr)/sizeof(arr[0]);
  int index = 0;

  cout << minElement(arr, index, n);

  return 0;
}


/*  
Output:-
----------
Minimum element of the array:
2

*/
