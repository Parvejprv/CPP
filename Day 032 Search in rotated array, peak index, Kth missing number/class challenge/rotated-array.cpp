/*  
Question. Find Minimum in Rotated Array.

*/

#include<iostream>
using namespace std;
int rotatedArray(int arr[], int n){
  int start = 0, end = n-1, mid, ans = arr[0];

  while(start <= end){
    mid = start + (end-start)/2;
    
    //1. if arr[mid] would be greater than arr[0] then left side sorted --> move to right
    //2. if arr[mid] would be smaller than arr[0] then right side sorted --> move to left
    //3. or would be equal too

    // Left side Sorted
    if(arr[mid] > arr[0]){
      start = mid+1;
    }
    // Right side Sorted
    else if(arr[mid] < arr[0]) {
      ans = arr[mid];
      end = mid - 1;
    } else if(arr[mid] == arr[0]) {
      start = mid +1;
    }

    // Or
    // if(arr[mid] >= arr[0]){
    //   start = mid+1;
    // } else if(arr[mid] < arr[0]) {
    //   end = mid - 1;
    // }
  }
  return ans;
}

int main(){
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  // Rotated Array
  int ans = rotatedArray(arr, n);
  cout << "Result: " << ans;

  return 0;
}


/*  
Output:-
---------
Enter the size of the array: 5
Input the elements into the array: 3 4 5 1 2
Result: 1


*/