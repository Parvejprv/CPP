#include<iostream>
using namespace std;
void DisplayIntegerArray(int a[], int n){
  for(int i=0; i<n; i++){
    cout << a[i] << " ";
  }
}
int main() {
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin  >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Display, Original array without Function
  // cout <<"Original Array: " <<  endl;
  // for(int i=0; i<n ; i++){
  //   cout << arr[i] << " ";
  // }


  // Using Function
  cout << "Display the array element using the function: " << endl;
  DisplayIntegerArray(arr,n);

}

/*  
Output:-
--------
Enter the size of the array: 5
Input the elements into the array: 10 20 30 40 50
Original Array:
10 20 30 40 50


Enter the size of the array: 5
Input the elements into the array: 10 20 30 40 05
Display the array element using the function:      
10 20 30 40 5

*/