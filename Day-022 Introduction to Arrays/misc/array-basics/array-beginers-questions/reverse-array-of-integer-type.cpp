/*  
  Question 1. Reverse the Array Of Integer Type.
*/




/* Method : 2 Most Optimized Solution to reverse the array. */


#include<iostream>
using namespace std;
int main() {
  
  // int arr[6] = {1,2,3,4,5,6};
  int arr[5] = {1,2,3,4,5};
  cout << "Original Array:\n";
  for(int i=0; i<5; i++){
    cout << arr[i] << " ";
  }

  int start=0, end=4;

  while(start<end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }

  cout << "\nReverse Array:\n";
  for(int i=0; i<5; i++){
    cout << arr[i] << " ";
  }

}


/*  
Output:
-------
Original Array:
1 2 3 4 5 6
Reverse Array:
6 5 4 3 2 1

Original Array:
1 2 3 4 5
Reverse Array:
5 4 3 2 1
*/







// *************************************

/* Method 1. We can Solve this problem of statement using the different loop to perform the revers operation to the reverse operation. */

/*  
#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
  //Create an extra array of size to store the reverse array element
  int reversedArray[size];

  //Copy the element in the reversedArray of Original array in reverse order
  for(int i=size-1; i>=0; i--){
    reversedArray[i] = arr[size-1 - i];
  }

  // Now copy the revered array element to the Original array
  for(int i=0; i<size; i++){
    arr[i] = reversedArray[i];
  }
}
int main() {
  int n, i, j;
  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[100];
  cout << "Input the n elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Display the Original Array
  cout << "Original Array:" << endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

  // reverse the array
  reverseArray(arr, n);

  // Display the Array After Reverse the Integer Array
  cout << "\nReversed Array:" << endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

}
*/

/*  
Output:
Enter the size of the array: 5
Input the n elements into the array: 10 20 30 40 50 60

Original Array:
10 20 30 40 50 60
Reversed Array:
60 50 40 30 20 10
*/

