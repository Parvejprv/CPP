
/*  
Topic
========
Recursion
===========

Binary search using recursion with variation,

*/
#include<iostream>
using namespace std;
bool binarySearchWithVariation(int arr[], int start, int end, int X){

  // Base case
  if(start > end){
    return 0;
  }
  

  int mid = start + (end-start)/2;
  if(arr[mid] == X)
    return 1;
  else if(arr[mid] > X){
    return binarySearchWithVariation(arr, mid+1, end, X);
  }
  else{
    return binarySearchWithVariation(arr, start, mid-1, X);
  }
}

int main() {
  int arr[] = {10, 8, 7, 7, 4, 2};

  int X = 12;
  int n = sizeof(arr)/sizeof(arr[0]);
  int start = 0, end = n-1;
  cout << binarySearchWithVariation(arr, start, end, X) << endl;

  return 0;
}


/*  
Output:-
---------
// try to search for 4
1

// try to search for 12
0
*/
