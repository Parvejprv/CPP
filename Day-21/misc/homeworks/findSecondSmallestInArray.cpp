/*  
//5: Find the second smallest element in an array of unique elements of size n. Where n>3.
*/

#include<iostream>
#include<climits>
using namespace std;

int secondSmallest(int arr[], int n){
  int firstSmallest = INT_MAX;
  int secondSmallest = INT_MAX;

  for(int i=0; i<n; i++){
    if(arr[i] < firstSmallest){
      firstSmallest = arr[i];
    }
  }

  for(int i=0; i<n; i++){
    if(arr[i] != firstSmallest){
      secondSmallest = min(secondSmallest, arr[i]);
    }
  }
  return secondSmallest;
}

int main() {
  int n; 
  cout << "Enter the size of the array : ";
  cin >> n;

  int arr[n];
  cout << "Input the elements into the array : ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  int secSmallest = secondSmallest(arr, n);
  cout << "Second Smallest = " << secSmallest;
}