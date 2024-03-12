/* 
Question: - Sort the given Integer array using the selection sort in decreasing order, With the help of the Function.
*/

#include<iostream>
using namespace std;

void SortTheArrayUsingSelectionSort(int arr[], int n) {
  
  for(int i=0; i<n; i++){
    int index = i;    
    for(int j=i+1; j<n; j++){
      if(arr[j] > arr[index])
      index = j;    
    } 
    // swap
    swap(arr[index], arr[i]);
  }

  // display Integer Array
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

int main() {
  int n; 
  cout << "Enter the size n: ";
  cin >> n;

  int arr[n];
  cout << "Input the elements into the array: ";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << "Integer Array After Sorting in Decreasing Order : " << endl;
  // Selection sort
  SortTheArrayUsingSelectionSort(arr, n);
  
}


/* 
Output 
*********

Enter the size n: 5
Input the elements into the array: 1 11 20 0 5
Integer Array After Sorting in Decreasing Order :
20 11 5 1 0


Enter the size n: 5
Input the elements into the array: 110 0 121 343 5
Integer Array After Sorting in Decreasing Order :
343 121 110 5 0

 */
