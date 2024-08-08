/*  
Topic
========

Merge Sort
==========

Question: 
-----------
WAP to print the element in descending order of given array.
Use Recursion Also into it.




Note: It takes,
- O(n log n) time complexity in the worst case scenario.
- O(n log n) space complexity in the worst case scenario.
- O(n log n) time complexity in the best case scenario.
- O(n log n) space complexity in the best case scenario.

TC: N*log(N)
SC: N
*/

#include<iostream>
#include<vector>
using namespace std;

// To merge the elements 
void merge(int arr[], int start, int mid, int end){
  // create a temp vector
  vector<int> temp (end-start+1);
  int left = start, right = mid+1, index = 0;

  while(left <= mid && right <= end){
    // Check for these left and right part's i.e. subarray's values
    if(arr[left] >= arr[right]){
      temp[index] = arr[left];
      index++, left++;
    } else {
      temp[index] = arr[right];
      index++, right++;
    }
  }

  // Left sub array mei jo bacha elem
  while(left <= mid) {
    temp[index] = arr[left];
    index++, left++;
  }

  // Similarily, Right sub array mei jo bacha elem
  while(right <= end) {
    temp[index] = arr[right];
    index++, right++;
  }

  // Now, we have to put this value into arr
  index = 0;
  while(start <= end) {
    arr[start] = temp[index];
    start++, index++;
  }
}

void mergeSort(int arr[], int start, int end) {
  // single element, that points the same index
  if(start == end) 
  return;

  // mid 
  int mid = start + (end-start)/2;
  // Left side partition
  mergeSort(arr, start, mid);
  // Right side partition
  mergeSort(arr, mid+1, end);

  // after partitioned merge them
  merge(arr, start, mid, end);

}

int main() {

  int arr[] = {6, 3, 5, 2, 2, 8, 1, 3, 2, 9};

  int n = sizeof(arr)/sizeof(arr[0]);

  int start = 0, end = n-1; 
  mergeSort(arr, start, end);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  

  return 0;
}


/*  
Output:-
---------
9 8 6 5 3 3 2 2 2 1


*/