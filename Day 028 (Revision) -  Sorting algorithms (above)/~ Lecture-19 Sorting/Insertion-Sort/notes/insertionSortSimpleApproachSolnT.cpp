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

  // Insertion Sort in ascending order
  for(int i=1; i<n; i++){
    for(int j=i; j>0; j--){
      if(arr[j] < arr[j-1]){
        //swap(arr[j], arr[j-1]);

        // Or Swap Manualy
        int temp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = temp;
      } else {
          break;
      }
    }
  }

  // Display the integer array after insertion sort
  cout << "Display the integer array after sorting: ";
  for (int i = 0; i < n; i++){
    cout <<  arr[i] << " ";
  }
  
}

/*  
Output:-
--------


Enter the size of the array: 7
Input the elements into the array: 090 200 1300 1 0 54 81
Display the integer array after sorting: 0 1 54 81 90 200 1300

Enter the size of the array: 5
Input the elements into the array: 101 20 30 54 50
Display the integer array after sorting:  20 30 50 54 101

*/