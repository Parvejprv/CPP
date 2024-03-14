#include<iostream>
using namespace std;
int findPositionOfTarget(int arr[], int size, int target){
  int start = 0, end = size-1, mid, index = 0;

  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid] == target){
      index = mid;
      return index;
    } else if(arr[mid] < target){
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return start;
}
int main() {
  int arr[1000];
  int n, target;
  
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for (int i = 0; i < n; i++){
    cin  >> arr[i];
  }

  cout << "Enter the target element: ";
  cin >> target;

  // find the index present at what position
  int result = findPositionOfTarget(arr, n, target);
  cout << "Element should present at index: " << result;
  return 0;
}


/*  
Output:
-----------
Enter the size of the array: 7
Input the elements into the array: 10 20 30 40 50 60 70
Enter the target element: 38
Element should present at index: 3

*/