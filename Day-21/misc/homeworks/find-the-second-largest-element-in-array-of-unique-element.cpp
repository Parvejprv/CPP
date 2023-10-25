//5: Find the second largest element in an array of unique elements of size n. Where n>3.

#include<iostream>
#include<climits>
using namespace std;

int findSecondLargestElement(int arr[], int n) {
  int firstMaximum = INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i] > firstMaximum) {
      firstMaximum = arr[i];
    }
  }

  int secondMaximum = INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i] != firstMaximum){
      secondMaximum = max(arr[i], secondMaximum);
    }
  }
  return secondMaximum;
}

int main() {
  int n;
  cout<<"Enter the number of elements in the array : ";
  cin>>n;

  int arr[n];

  cout<<"Input the elements into array : ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Function call
  int res = findSecondLargestElement(arr, n);
  if (res == -1)
  cout << "No Second Largest Element Found";
  else
  cout << "The second largest element is " << res;
}