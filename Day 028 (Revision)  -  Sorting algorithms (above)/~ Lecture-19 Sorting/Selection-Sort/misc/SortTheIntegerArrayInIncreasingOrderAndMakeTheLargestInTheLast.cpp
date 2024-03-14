/*  */


#include<iostream>
using namespace std;
int main() {
  int arr[1000];
  int n, index;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  } 

  for(int i=n-1; i>0; i--){
    index = i;
    for(int j=i-1; j>=0; j--){
      if(arr[j] > arr[index]){
        index = j;
      }
    }
    cout << "\nmax index " << index << endl;
    for(int i=0;i<n; i++){
      cout << arr[i] << " ";
    }
    swap(arr[i], arr[index]);
  }

  cout << endl;
  cout << endl;

  // Display the array after selection sort
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

/*  
Output:-
---------

Enter the size of the array: 5
Input the elements into the array: 10 8 3 2 4

max index 0
10 8 3 2 4 
max index 1
4 8 3 2 10 
max index 0
4 2 3 8 10
max index 0
3 2 4 8 10

2 3 4 8 10

*/