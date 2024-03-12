
/*  
Question 1. WAP to Rotate an integer array By one(right side) cyclically.
*/



/* Solution 2. (Method 2) : Using the Dynamic inputed array */

#include<iostream>
using namespace std;
void RotateArrayCyclicallyByOne(int arr[], int n){

  // here is the logic to rotate an integer array cyclically by one.

  // Trick No. 1
  //-------------
  int temp = arr[n-1];
  for(int i=n-2; i>=0; i--){
    arr[i+1] = arr[i];
    //cout << arr[i+1] <<  " : at index " << i << endl;
  }
  arr[0] = temp;


  /*  
  // Trick No. 2
  //-------------
  int temp = arr[n-1];
  for(int i=n-1; i>0; i--){
    arr[i] = arr[i-1];
    cout << arr[i] << " at index " << i << endl;
  }
  arr[0] = temp;
  */


  // Display the Rotated array of integer type
  cout << "The rotated array is: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

}
int main() {
  int n;
  cout << "Enter the size of the Integer array: ";
  cin >> n;

  int arr[1000];

  // Enter the elements into the Integer array.
  cout << "Input the Elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // function call
  RotateArrayCyclicallyByOne(arr, n);
}

/* Output:-
------------
Enter the size of the Integer array: 5 
Input the Elements into the array: 10 20 30 40 50
The rotated array is: 50 10 20 30 40
*/





/*  
Solution 1 (Method 1). Statically inputed array.

#include<iostream>
using namespace std;
int main() {
  int arr[5] = {2, 4, 5, 6, 7};
  // size
  int n = sizeof(arr)/sizeof(arr[0]);

  cout << "Original array: ";
  for (int i=0; i < 5; i++)
  cout << arr[i] << " ";
  cout << endl;

  // cout << "size of the array: " << n;
  int temp = arr[n-1];
  for(int i=n-1; i>=0; i--){
    arr[i] = arr[i-1];
  }
  arr[0] = temp;


  // After Rotating array cycalically
  cout << "After Rotating array Cyclically: \n";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
*/