/* 
Question:- Sort the given Integer array using the selection sort in increasing order, With the help of the Function.
-------------------------------

*/



#include<iostream>
using namespace std;

void SortTheArrayUsingSelectionSort(int arr[], int n) {
  
  for(int i=0; i<n; i++){
    int index = i;    
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[index])
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

  cout << "Integer Array After Sorting : " << endl;
  // Selection sort
  SortTheArrayUsingSelectionSort(arr, n);
  
}



/* 
Output 
*********

Enter the size n: 5
Input the elements into the array: 9 1 11 20 8
Integer Array After Sorting :
1 8 9 11 20

Enter the size n: 5
Input the elements into the array: 10 4 2 0 1
Integer Array After Sorting :
0 1 4 2 10


Enter the size n: 5
Input the elements into the array: 111 09 03 1 4
Integer Array After Sorting :
1 3 4 9 111

 */