/*  
Question: Write a Program to find the target element from the integer array of decreasing order using the binary search.

*/


#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int target){
  int start = 0, end = n-1;
  while(start <= end){
    // int mid = (start + end )/2;
    int mid = start + (end - start)/2;  
    if(arr[mid] == target){
      cout << "Target element " << target << " Got it! at index " << mid;
      return mid;
    } else if(arr[mid] > target){
      start = mid+1;
    } else {
      end = mid-1;
    }
  }

  // If we reach here, the element was not present then
  return -1;
}

int main() {
  int arr[1000];
  int size, k;
  cout << "Enter the size of the array: ";
  cin >> size;

  cout << "Input the elements into the array: ";
  for (int i = 0; i < size; i++){
    cin >> arr[i];
  }

  cout << "Enter the searching element: ";
  cin >> k;

  // Binary Search
  int result = binarySearch(arr, size, k);

  (result == -1) ? cout << "Element is not present in array" : cout << " (Element is present in the array) ";

  return 0;
}

/*  
Output:-
--------
Enter the size of the array: 5
Input the elements into the array: 10 8 6 4 2
Enter the searching element: 8
Target element 8 Got it! at index 1 (Element is present in the array)

Enter the size of the array: 5
Input the elements into the array: 100 90 80 70 60
Enter the searching element: 50
Element is not present in array

Enter the size of the array: 6
Input the elements into the array: 90 80 70 60 50 40
Enter the searching element: 30
Element is not present in array
*/