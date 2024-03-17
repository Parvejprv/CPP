#include<iostream>
using namespace std;
int main() {
  int arr[1000];
  int n;
  cout<<"Enter the Size of the array: ";
  cin >> n;

  // take input the elements into the array
  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Original Array
  cout << "Original Array: \n";
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  

  // Rotate Cyclically elements of the array
  int lastElement = arr[n-1];
  for(int i=n-2; i>=0; i--){
    arr[i+1] = arr[i];
  }
  arr[0] = lastElement;


  // After Rotated array element by one 
  cout << "Array After Rotated: " << endl;
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

}

/*  
Output:
--------
Enter the Size of the array: 5
Input the elements into the array: 1 2 3 4 5
Original Array:
1 2 3 4 5
Array After Rotated:
5 1 2 3 4

*/