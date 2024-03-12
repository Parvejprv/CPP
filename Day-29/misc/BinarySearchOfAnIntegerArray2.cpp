/*  
Question: Write a Program to find the target element from the integer array using the binary search.

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
    } else if(arr[mid] < target){
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

  (result == -1) ? cout << "Element is not present in array"
          : cout << " (Element is present in the array) ";

  return 0;
}

/*  
Output:-
--------
Enter the size of the array: 4
Input the elements into the array: 10 20 40 50
Enter the searching element: 40
Target element 40 Got it! at index 2


Enter the size of the array: 5
Input the elements into the array: 10 20 40 50 60
Enter the searching element: 50
Target element 50 Got it! at index 3 (Element is present in the array)

Enter the size of the array: 5
Input the elements into the array: 10 20 30 40 50
Enter the searching element: 60
Element is not present in array

Enter the size of the array: 5
Input the elements into the array: 50 60 70 80 90 
Enter the searching element: 100
Element is not present in array
*/