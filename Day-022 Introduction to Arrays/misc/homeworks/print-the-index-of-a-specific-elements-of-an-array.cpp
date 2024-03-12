//3: Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.

#include<iostream>
using namespace std;

// int PrintSpecificIndex(int arr[], int n, int K) {
//   for(int i=0; i<n; i++){
//     if(arr[i] == K) {
//       return i;
//     }
//   }
// }

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  // create an empty array
  int arr[n];

  // array elements input
  cout<<"Input the elements into the array : ";
  for (int i=0;i<n;i++) {
    cin>>arr[i];
  }

  int k;
  cout << "Input the Specific Element : ";
  cin >> k;

  // Without using function
  for (int i = 0; i < n; i++){
    if (arr[i] == k){
      cout <<"Index : " << i;
      break;
    }
  }

  // Specific index
  // int idx = PrintSpecificIndex(arr, n, k);
  // cout << "Find at Index : " << idx;

}