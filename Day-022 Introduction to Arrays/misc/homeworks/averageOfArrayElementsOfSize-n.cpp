//2: Calculate the average of elements in an array of size 18.

#include<iostream>
using namespace std;

int Average(int arr[], int n) {
  int sum = 0;
  for(int i=0; i<n; i++){
    sum += arr[i];
  }
  int average = sum/n;
  return average;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  // create an empty array
  int arr[n];

  // input elements into the array
  cout<<"Input the elements into the array : ";
  for (int i=0;i<n;i++) {
    cin>>arr[i];
  }

  // // Without using function
  // int sum = 0;
  // for (int i=0;i<n;i++) {
  //   sum += arr[i];
  // }

  // int avg = sum/n;
  // cout << avg;
   
  

  // Average of a array 
  int avg = Average(arr, n);
  cout << avg;

}



// // Output:-
// Enter a number: 18
// Input the elements into the array : 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18
// 9