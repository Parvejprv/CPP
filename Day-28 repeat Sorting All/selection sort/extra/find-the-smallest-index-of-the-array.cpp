#include<iostream>
using namespace std;

int smallestIndexOfArray(int arr[], int n) {
  int index = 0;
  for(int i=0; i<n; i++){
    if(arr[i] < arr[index])
    index = i;
  }
  return index;
}

int main() {
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n];
  cout << "Enter the elements into the array : ";
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }


  // Find the smallest index of array
  int smallestIndex = smallestIndexOfArray(arr,n);
  cout << "Smallest Elements Index of the array: " << smallestIndex << endl;
}



/* 
Output:-
----------- 

Enter the size of the array: 5
Enter the elements into the array : 10 20 3 4 1
Smallest Elements Index of the array: 4


*/