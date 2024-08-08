/*  
Topic: 
========
Recursion using quick sort techniques

Question:-
============ 
Write a program to sort the array using the quick sort technique in recursion.


(Descending order)

*/

#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
  int pos = start;    // 0 th index
  for(int i = start; i <= end; i++){

    // Check for the element of arr having index i are greater than or equals to the pivot element ( in this case we chose last element as pivot element ) then swap the element with the pos element.
    if(arr[i] >= arr[end]) { 
      swap(arr[i], arr[pos]);
      pos++;
    }
  }
  return pos-1;
}

void quickSort(int arr[], int start, int end){
  // Base case
  if (start > end){
    return;
  }
  
  int pivot = partition(arr, start, end);

  // Left side
  quickSort(arr, start, pivot-1);
  // Right side
  quickSort(arr, pivot + 1, end);
}

int main() {
  int arr[] = {6, 4, 2, 8, 13, 7, 11, 9, 3, 6};

  int n = sizeof(arr)/sizeof(arr[0]);
  int start = 0, end = n-1;

  quickSort(arr, start, end);

  // Display the array elements after sorting using quick sort
  cout << "Display the array elements after sorting using the quick sort technique: " << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  
  return 0;
}


/*  
Time Complexity: 
Space Complexity: 



Output:-
-----------
Display the array elements after sorting using the quick sort technique: 
13 11 9 8 7 6 6 4 3 2 

*/
