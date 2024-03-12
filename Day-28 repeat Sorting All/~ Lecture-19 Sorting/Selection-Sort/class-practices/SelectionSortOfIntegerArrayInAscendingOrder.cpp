/*  
Question 1. 
Sort the array of integer type in increasing order.
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
      if(arr[j] < arr[index]){
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
Input the elements into the array: 10 8 3 2 1
1 2 3 8 10

*/





/*  Solution 2. Or Method 2. :- With the help of the function */

#include<iostream>
using namespace std;
void sortTheArrayUsingTheSelectionSort(int arr[], int n) {
  for(int i=0; i<n-1; i++){
    int index = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] < arr[index]){
        // min-index
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
  sortTheArrayUsingTheSelectionSort(arr, n);

  // Display the array element
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}


/* 
Output:-
--------
Enter the Size of the array: 5
Input the elements into the array: 101 30 3 09 7
3 7 9 30 101


Enter the Size of the array: 6
Input the elements into the array: 10 20 30 40 500 09
9 10 20 30 40 500
*/