/*  
Topic
=======
Recursion

Question:-
------------
Implement a Binary search using the recursion.

*/





/* Binary search using recursion where I try to find the element and return that element, and if it not present return -1 */

#include<iostream>
using namespace std; 

// Binary search using recursion
int binarySearch(int arr[], int start, int end, int X){
  // Base condition
  if(start > end)
  return -1;

  int mid = start + (end-start)/2;

  if(arr[mid] == X)
    return arr[mid];
  else if(arr[mid] < X){
    return binarySearch(arr, mid+1, end, X);
  } else {
    return binarySearch(arr, start, mid-1, X);
  }
}

int main() {
  int arr[] = {2, 3, 4, 10, 40};

  int X = 10;


  int n = sizeof(arr)/sizeof(arr[0]);   // size of array
  int start = 0, end = n-1;
  cout << binarySearch(arr, start, end, X) << endl;

  return 0;
}


/*  
Output:-
------------
10


-1

*/






















/*  

#include<iostream>
using namespace std; 

// Binary search using recursion
bool binarySearch(int arr[], int start, int end, int X){
  // Base condition
  if(start > end)
  return 0;

  int mid = start + (end-start)/2;

  if(arr[mid] == X)
    return 1;
  else if(arr[mid] < X){
    return binarySearch(arr, mid+1, end, X);
  } else {
    return binarySearch(arr, start, mid-1, X);
  }
}

int main() {
  int arr[] = {2, 3, 4, 10, 40};

  int X = 100;


  int n = sizeof(arr)/sizeof(arr[0]);   // size of array
  int start = 0, end = n-1;
  cout << binarySearch(arr, start, end, X) << endl;

  return 0;
}

*/

/*  
Output:-
---------
// try to search an element 10 that present into the arr
1

// try to search 100
0
*/