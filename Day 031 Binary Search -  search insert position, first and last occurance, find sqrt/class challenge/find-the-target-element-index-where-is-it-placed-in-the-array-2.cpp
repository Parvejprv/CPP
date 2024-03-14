
/* 
Question:  
  In this program we are using Binary Search to find out whether a given number is to be inserted in an array find its position and print it.
*/

#include<iostream>
using namespace std;
void findIndexOfTarget(int arr[], int n, int k){
  int start = 0, end = n-1, mid, index;
  while (start <= end) {
    mid = start +(end- start)/2;
    if(arr[mid] == k){
      index = mid;
      break;
    } else if(arr[mid] < k){
      start = mid + 1;
    } else {
      index = mid;
      end = mid - 1;
    }
  }
  cout << "The target element is to be present at index: "<<index<<endl;
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

  // findIndexTobeInserted
  findIndexOfTarget(arr, n, target);
  
  return 0;
}


/*  

Here Time Complexity of the It: O(log(N)) and Space Complexity of the It: O(1).

Output:-
--------

(while printing start index of the inserted element)
Enter the size of the array: 6
Input the elements into the array: 10 20 20 30 40 50
Enter the target element: 15
The target element is to be present at index: 1


Enter the size of the array: 7
Input the elements into the array: 10 10 20 30 40 40 50
Enter the target element: 21
The target element is present at index: 3


Enter the size of the array: 6
Input the elements into the array: 10 20 20 30 40 50
Enter the target element: 15
The target element is to be present at index: 1
*/