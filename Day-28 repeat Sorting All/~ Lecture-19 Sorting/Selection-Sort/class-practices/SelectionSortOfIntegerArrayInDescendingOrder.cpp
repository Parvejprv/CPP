/*  
Question 1. 
Sort the array of integer type using the selection sort in decreasing order.
*/


/* Solution 1. Method 1. :- without Using Function */

/*
#include<iostream>
using namespace std;
int main() {
  int arr[100];
  int n;
  cout << "Enter the Size of the array: ";
  cin >> n;

  // take array elements input into the array
  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }


  // Selection Sort
  for(int i=0; i<n-1; i++){
    int index = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] > arr[index]){
        index = j;
      }
    }
    // swap
    // swap(arr[index], arr[i]);

    // swapping
    int temp = arr[index];
    arr[index] = arr[i];
    arr[i] = temp;

  }

  // Display the array element
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
*/

/*  
Output:-
--------
Enter the Size of the array: 5
Input the elements into the array: 1001 2 203 04 49
array element in Descending Order : 
1001 203 49 4 2

*/





/*  Solution 2. Or Method 2. :- With the help of the function */

#include<iostream>
using namespace std;
void sortTheArrayUsingTheSelectionSortInDescendingOrder(int arr[], int n) {
  for(int i=0; i<n-1; i++){
    int index = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] > arr[index]){
        index = j;
      }
    }
    // swap
    // swap(arr[index], arr[i]);

    // swapping
    int temp = arr[index];
    arr[index] = arr[i];
    arr[i] = temp;
  }
}
int main() {
  int arr[100];
  int n;
  cout << "Enter the Size of the array: ";
  cin >> n;

  // take array elements input into the array
  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // function call
  sortTheArrayUsingTheSelectionSortInDescendingOrder(arr, n);

  // Display the array element in Descending Order
  cout << "array element in Descending Order : " << endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}


/* 
Output:-
--------
Enter the Size of the array: 5
Input the elements into the array: 101 20 35 89 9
array element in Descending Order : 
101 89 35 20 9

Enter the Size of the array: 6
Input the elements into the array: 111 2 3 90 32 89 9
array element in Descending Order : 
111 90 89 32 3 2
*/