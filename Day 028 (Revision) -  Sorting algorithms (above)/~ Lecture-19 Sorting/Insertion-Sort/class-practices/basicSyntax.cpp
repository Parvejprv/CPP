/*  
Insertion Sort

*/






#include<iostream> 
using namespace std;
int main() {
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the integer array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Insertion Sort
  for(int i=0; i<n; i++){
    for(int j=n-1; j>0; j--){
      if(arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
      }
    }
  }

  // Display the array after sorting using the insertion sort
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}


/*  
Output:-
--------
Enter the size of the array: 5
Input the elements into the integer array: 1 4 6 8 5
1 4 5 6 8


Enter the size of the array: 5
Input the elements into the integer array: 10 2 4 5 30
2 4 5 10 30

Enter the size of the array: 5
Input the elements into the integer array: 1 4 6 8 5
1 4 5 6 8

Enter the size of the array: 5
Input the elements into the integer array: 40 30 10 20 
50
10 20 30 40 50


Enter the size of the array: 7
Input the elements into the integer array: 
090 1 21 0 54 45 50 
0 1 21 45 50 54 90
*/