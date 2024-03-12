#include<iostream>
using namespace std;
int main() {
  int arr[100];
  int n;
  cout << "Enter the Size of the array: ";
  cin >> n;

  // take array elements input into the array
  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }
}