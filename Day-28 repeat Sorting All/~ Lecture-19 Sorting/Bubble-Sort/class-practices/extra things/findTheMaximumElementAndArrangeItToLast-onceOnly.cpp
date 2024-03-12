#include<iostream> 
using namespace std;
int main() {
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  for(int j=0; j<n-1; j++){
    if(arr[j] > arr[j+1])
      swap(arr[j], arr[j+1]);
  }

  for(int i=0;i<n; i++){
    cout << arr[i] << " ";
  }
}