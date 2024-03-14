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

  for(int i=n-1; i>=0; i--){
    bool swapped = 0;
    for(int j=n-1; j>0; j--){
      if(arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
        swapped = 1;
      }
    }
    if(swapped == 0){
      break;
    }
  }

  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}



/*  
Output:-
--------
Enter the size of the array: 5
Input the elements into the array: 
4 1 2 3 5
1 2 4 3 5


Enter the size of the array: 5
Input the elements into the array: 10 2 30 4 1
1 2 4 10 30

Enter the size of the array: 5
Input the elements into the array: 100 2 300 4 0

0 2 4 100 300
*/