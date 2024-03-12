/*  
Question. Search the target element in Sorted Rotated Array.

Here is GFG: Search in a Rotated Array
*/

#include<iostream>
using namespace std;
int rotatedArray(int arr[], int n, int target){
  int start = 0, end = n-1, mid;

  while(start <= end){
    mid = start + (end-start)/2;
    
    //1. If Array of mid == target then return mid

    //2. If Arr[mid] >= arr[0], And if arr[start] would be less than equals to target and arr[mid] greater than equals to target then left side sorted --> move to right

    //3. Else If Arr[mid] <= arr[0], And if arr[mid] would be less than equals to target and arr[end] greater than equals to target then right side sorted --> move to left i.e.


    if(arr[mid] == target){
      return mid;
    } else if(arr[mid] >= arr[0]) {
      if(arr[start] <= target && arr[mid] >= target){
        end = mid - 1;
      } else {
        start = mid+1;
      }
    } else {
      if(arr[mid] <= target && arr[end] >= target){
        start = mid + 1;
      } else {
        end = mid - 1;
      }
    } 
  }
}

int main(){
  int arr[1000];
  int n, target;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  cout << "Enter the target element: ";
  cin >> target;

  // Rotated Array
  int ans = rotatedArray(arr, n, target);
  cout << "Target element at index: " << ans;

  return 0;
}


/*  
Output:-
---------
Enter the size of the array: 5
Input the elements into the array: 3 4 5 0 1
Enter the target element: 1
Target element found at index: 4

Enter the size of the array: 6
Input the elements into the array: 3 4 5 0 1 2
Enter the target element: 1
Target element found at index: 4


Enter the size of the array: 5        
Input the elements into the array: 2 4 6 0 1
Enter the target element: 6
Target element at index: 2
*/








/*
CPP

while(l <= h){
      int m = l + (h-l)/2;

      // If arr[mid] == target, return mid
      if(A[m] == key){
          return m;
      }
      // Left side sorted
      else if (A[m] >= A[0]){
          if(A[l] <= key && A[m] >= key){
              h = m - 1;
          } else {
              l = m + 1;
          }
      }
      // Right side sorted
      else {
          if(A[m] <= key && A[h] >= key){
              l = m + 1;
          } else {
              h = m - 1;
          }
      }
  }

  return -1;

*/

/*  
How to check for the left side array if it is sorted or not:-

// arr[mid] == target, then return mid

// Left side Sorted (if Array would be left side sorted.)
if(arr[mid] >= arr[0]){
  start = mid + 1;
} 
// Right side sorted
else if(arr[mid] < arr[0]){
  end = mid - 1;
}

*/