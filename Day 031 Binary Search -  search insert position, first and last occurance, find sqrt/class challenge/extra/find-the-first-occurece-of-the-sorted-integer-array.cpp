#include<iostream>
using namespace std; 
int firstOccurenceOfTarget(int arr[], int n, int target){
  int start = 0, end =n-1, mid, first_occur = -1;

  while(start <= end) {
    mid = start + (end-start)/2;
    if(arr[mid] == target){
      first_occur = mid;
      // move the pointer to left side in order to find first occurrence of this element.
      end = mid - 1;
    } else if(arr[mid] < target) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return first_occur;
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

  // First Occurence of the target
  int first = firstOccurenceOfTarget(arr, n, target);
  cout << "First Occurence: " << first;
  return 0;
}


/*  
Output:-
---------
Enter the size of the array: 5
Input the elements into the array: 10 20 30 30 40
Enter the target element: 30
First Occurence: 2

*/