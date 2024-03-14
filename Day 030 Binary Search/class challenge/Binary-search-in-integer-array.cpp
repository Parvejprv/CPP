#include<iostream>
using namespace std;
void binarySearch(int arr[], int n, int target){
  int start = 0, end = n-1;
  while(start <= end){
    int mid = (start+end)/2;
    if(arr[mid] == target){
      cout << "Target element " << target << " Got it! at index " << mid;
      break;
    } else if(arr[mid] < target){
      start = mid+1;
    } else {
      end = mid-1;
    }
  }
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
  binarySearch(arr, size, k);

}

/*  
Output:-
--------
Enter the size of the array: 7
Input the elements into the array: 1 2 3 4 5 6 7
Enter the searching element: 3
Target element 3 Got it! at index 2


Enter the size of the array: 5
Input the elements into the array: 1 2 3 4 5
Enter the searching element: 4
Target element 4 Got it! at index 3

*/