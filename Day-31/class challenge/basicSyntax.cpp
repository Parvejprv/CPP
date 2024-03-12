/*  
Question. 

*/

#include<iostream>
using namespace std;
int searchAnElementInRotatedArray(int arr[], int n, int target){
  int start = 0, end = n-1, mid;

  while (start <= end) {
    mid = start +(end- start)/2;
    if(arr[mid] == target){
      return mid;
    } else if(arr[mid] < target){
      start = mid + 1;
    } else {
      
    }
  }
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
  
  return 0;
}