/* 

  Question 1. Reverse the Integer Array ( Without Optimized Solution).

  Descriptions: You have been given the Integer array, you have to print the array in the reverse order.

  For Example: 
  Array size: 5
  Input : [1,2,3,4,5]
  Output : [5,4,3,2,1]
 */


#include<iostream> 
using namespace std;

// Function to Reverse the Array Element
void reverseArray(int arr[], int size) {

  int temp[10];
  // Copy the elements of arr[i] into the temp array.
  for(int i=size-1; i>=0; i--){
    temp[i]=arr[size-1 - i];
  }

  //Now Again, Copy the temp[i] into the arr[i]
  for(int i=0; i<size; i++){
    arr[i] = temp[i];
  }
}

int main() {

  int n; 
  cout << "Enter the Size of the Array: ";
  cin >> n;

  int arr[10];
  cout << "Input the Elements into the Array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Display the Array Element
  cout << "Original Array: \n";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

  // Reverse the array element
  reverseArray(arr, n);

  // Display the Reversed Array
  cout << "\nReversed Array: \n";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}



/*  
Output:
--------
Enter the Size of the Array: 5
Input the Elements into the Array: 10 20 30 40 50
Original Array:
10 20 30 40 50
Reversed Array:
50 40 30 20 10


Enter the Size of the Array: 5 
Input the Elements into the Array: 10 0 0 0 0
Original Array:
10 0 0 0 0
Reversed Array:
0 0 0 0 10

*/