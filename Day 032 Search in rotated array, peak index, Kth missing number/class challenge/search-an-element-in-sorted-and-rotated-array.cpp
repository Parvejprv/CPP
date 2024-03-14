/*  
Question. Search an element in rotated array.

*/

#include<iostream>
using namespace std;
int searchAnElementInRotatedArray(int arr[], int n, int target){
  int start = 0, end = n-1, mid;

  while (start <= end) {
    mid = start +(end- start)/2;
    // Element found at mid index
    if(arr[mid] == target){
      return mid;
    }
    // Left side sorted
    else if (arr[mid] >= arr[0])
    {
      // now, move left side too, otherwise move to right
      if(arr[start] <= target && arr[mid] > target){
        end = mid - 1;
      } else {
        start = mid + 1;
      }
    }
    // Right side sorted
    else
    {
      if(arr[mid] < target && arr[end] >= target){
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    }
  }
  return -1;
}
int main() {
  int arr[1000];
  int n, target;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  cout << "Enter the target element: ";
  cin >> target;

  // searchAnElementInRotatedArray
  int res = searchAnElementInRotatedArray(arr, n, target);
  cout << "Element present at index: " << res;
  
  return 0;
}


/*  
Output:-
--------
Enter the size of the array: 6
Input the elements into the array: 3 4 5 0 1 2
Enter the target element: 2
Element present at index: 5


Enter the size of the array: 8
Input the elements into the array: 2 3 4 5 6 0 1 1 
Enter the target element: 1
Element present at index: 6 
*/