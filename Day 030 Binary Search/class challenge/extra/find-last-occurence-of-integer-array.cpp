/*  
Question: - Find the first occurence  of a number that is repeated more than once in an array. 

Write a function called findFirstRepeatedNumber which takes in an array of integers and returns the value of the first occurrence of a number that appears more than once in the array. If
Given an unsorted integer array, find the first occurrence of a number that appears more than once in the array. If there are no such numbers return -1.
*/

/* Last Occurence of repeatedInteger element */

#include<iostream>
using namespace std; 
int lastOccurenceOfTarget(int arr[], int n, int target){
  int start = 0, end =n-1, mid, first_occur = -1;

  while(start <= end) {
    mid = start + (end-start)/2;
    if(arr[mid] == target){
      first_occur = mid;
      // move the pointer to left side in order to find first occurrence of this element.
      start = mid + 1;
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

  // Last Occurence of the target
  int last = lastOccurenceOfTarget(arr, n, target);
  cout << "Last Occurence: " << last;
  return 0;
}


/*  
Output:-
---------
Enter the size of the array: 5
Input the elements into the array: 10 20 30 30 40
Enter the target element: 30
Last Occurence: 2
 

Enter the size of the array: 6
Input the elements into the array: 10 20 20 20 30 40
Enter the target element: 20
Last Occurence: 3

*/