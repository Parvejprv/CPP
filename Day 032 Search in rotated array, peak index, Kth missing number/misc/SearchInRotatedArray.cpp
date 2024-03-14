/*  
Question :- Write a Program to Search an target element in the sorted rotated array using the binary search algorithm.

*/

#include<iostream>
using namespace std;
int searchInRotatedArray(int arr[], int target, int n) {
  int start = 0, end = n-1, mid;
  int index = -1;

  while(start <= end){
    mid = start + (end-start)/2;

    // Check if target is found
    if(arr[mid] == target)
    return mid;
    
    // Left side sorted
    if(arr[mid] >= arr[0]){
      // check for target element
      if(arr[start] <=  target && arr[mid] >= target) {
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    }
    // right side sorted
    else {
      if(arr[mid] <= target && arr[end] >= target){
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
  }
  return index;
}
int main() {
  int arr[1000];
  int n;
  cout << "Enter the size of the array:";
  cin >> n;

  cout << "Input the Number of pages into the array:";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int target;
  cout << "Enter the target element: ";
  cin >> target;

  // Function to Search in Rotated array
  int searchElement = searchInRotatedArray(arr, target, n);
  cout << "Target element present at index:" << searchElement << endl;

  return 0;
}


/*  
Output:-
--------
Enter the size of the array:6
Input the Number of pages into the array: 2 3 4 5 0 1
Enter the target element: 0
Target element present at index:4


Enter the size of the array:6
Input the Number of pages into the array:2 3 4 5 0 1
Enter the target element: 4
Target element present at index:2


Enter the size of the array:7 
Input the Number of pages into the array:2 3 4 5 0 1 7
Enter the target element: 1
Target element present at index:5


Enter the size of the array:6
Input the Number of pages into the array:2 3 4 5 0 1
Enter the target element: 7
Target element present at index:-1
*/