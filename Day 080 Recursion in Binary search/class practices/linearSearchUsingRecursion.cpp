/*  
Topic
========

Recursion
==========

Question: Search an element using the linear search using recursion, if the element is present into the array return 1 otherwise return 0.

Note: This problem may vary like this, we have to return the element if that is present into the array, and if it not present into the array then return -1.

*/



#include<iostream>
using namespace std;
int linearSearch(int arr[], int index, int X, int N){

  // Base case
  if(index == N)
    return -1;

  if(arr[index] == X)
    return arr[index];
  return linearSearch(arr, index+1, X, N);
}

int main() {
  int arr[] = {2, 4, 7, 3, 11, 8, 12};
  int n = sizeof(arr)/sizeof(arr[0]);
  int index = 0;

  int X = 30;

  cout << linearSearch(arr, index, X, n) << endl;

  return 0;
}


/*  
Output:-
---------
// Here, we are try to give the output as if the element present,
8

// If Not present then
-1

*/


























/*  

(Without variation - same as above asked)

#include<iostream>
using namespace std;
bool linearSearch(int arr[], int index, int X, int N){

  // Base case
  if(index == N)
    return 0;

  if(arr[index] == X)
  return 1;
  linearSearch(arr, index+1, X, N);
}

int main() {
  int arr[] = {2, 4, 7, 3, 11, 8, 12};
  int n = sizeof(arr)/sizeof(arr[0]);
  int index = 0;

  int X = 8;

  cout << linearSearch(arr, index, X, n) << endl;

  return 0;
}

*/


/*  
Output:-
----------
// Let's try to search for 8 (present)
1

// Let's try to search for 30 (not present)
0

*/
