/*  
Question:-
-----------
Write a Program to Find out the position to be insert the an integer element at the correct position in the sorted integer array.

*/

#include<iostream>
using namespace std;
int KthPositionToInsert(int arr[], int n, int target){
  int KthPos = 0;
  int start = 0, end = n-1, mid;
  while(start <= end){
    mid = start + (end-start)/2;
    if(arr[mid] >= target){
      KthPos = mid;
      end = mid - 1;
    } else if(arr[mid] < target){
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return KthPos;
}
int main() {
  int arr[1000];

  int n;
  cout << "Enter the size of the integer array: ";
  cin >> n;

  // Input elements in the array
  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Enter the Kth element to insert at correct posit
  int k;
  cout <<"Enter element to be insert: ";
  cin >> k;


  // Which position it is to insert in sorted array
  int pos = KthPositionToInsert(arr, n, k);
  cout << "At position: " << pos << endl;
  return 0;
}

/*  
Output:-
----------
Enter the size of the integer array: 6
Input the elements into the array: 1 1 1 3 6 6
Enter the element to insert: 5
Position: 4


Enter the size of the integer array: 7
Input the elements into the array: 1 1 1 3 4 5 8
Enter the element to insert: 7
Position: 6


Enter the size of the integer array: 9
Input the elements into the array: 1 1 1 3 4 5 6 8 10   
Enter element to be insert: 6
At position: 6
*/