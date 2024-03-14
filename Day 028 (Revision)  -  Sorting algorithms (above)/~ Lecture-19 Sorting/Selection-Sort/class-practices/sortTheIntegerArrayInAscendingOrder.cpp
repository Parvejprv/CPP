/*  
Question 1. WAP a CPP and Sort the Given integer array in  ascending order.
*/


/* ***************************************** */
/* Method 1.(Solution 1) : Without using function */

/*
#include<iostream>
#include <climits>
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
  for(int i=0; i<n; i++){
  int index = i;
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[index]){
        index = j;
      }
    }
    // swap the arr[i] with arr[index]
    swap(arr[index], arr[i]);
  }

  // Display the integer array
  cout << "Display Array after performing the selection sort: " << endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
  
}
*/

/*  
Output:-
--------
Enter the Size of the array: 6
Input the elements into the array: 10 8 2 3 1 4
Display Array after performing the selection sort:
1 2 3 4 8 10

Enter the Size of the array: 7
Input the elements into the array: 10 8 2 3 1 4 0
Display Array after performing the selection sort:
0 1 2 3 4 8 10
*/

/* ***************************************** */







/* ***************************************** */
/* Method 2.(Solution 2) : With the help of function */

#include<iostream>
#include <climits>
using namespace std;
void sortArrayUsingSelectionSort(int arr[], int size){
  // Selection Sort
  for(int i=0; i<size; i++){
  int index = i;
    for(int j=i+1; j<size; j++){
      if(arr[j] < arr[index]){
        index = j;
      }
    }
    // swap the arr[i] with arr[index]
    swap(arr[index], arr[i]);
  }
}

void displayArray(int arr[], int n){
  // display integer array
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
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

  sortArrayUsingSelectionSort(arr, n);
  cout << "Display Array after performing the selection sort: " << endl;
  displayArray(arr, n);
}

/*  
Output:-
--------
Enter the Size of the array: 6
Input the elements into the array: 10 8 2 3 1 4
Display Array after performing the selection sort:
1 2 3 4 8 10

Enter the Size of the array: 7
Input the elements into the array: 10 8 2 3 1 4 0
Display Array after performing the selection sort:
0 1 2 3 4 8 10

Enter the Size of the array: 5
Input the elements into the array: 10 2 0 4 8
Display Array after performing the selection sort:
0 2 4 8 10

Enter the Size of the array: 7
Input the elements into the array: 10 2 3 12 21 0 1
Display Array after performing the selection sort:
0 1 2 3 10 12 21
*/