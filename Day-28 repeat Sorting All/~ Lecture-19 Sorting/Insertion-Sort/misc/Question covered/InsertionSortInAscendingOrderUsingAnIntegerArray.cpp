/*  
Question:- Write a CPP Program to sort and print the Integer array using the Insertion Sort techniques (Ascending Order).
*/

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

  // Insertion Sort 
  for(int i=1; i<n; i++){
    for(int j=i; j>0; j--){
      if(arr[j] < arr[j-1]){
        //swap(arr[j], arr[j-1]);

        // Or Swap Manualy
        // int temp = arr[j-1];
        // arr[j-1] = arr[j];
        // arr[j] = temp;

        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      } else {
        break;
      }
    }
  }

  // Display the array elements after Insertion Sort
  cout << "Display the integer array After Insertion Sort: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

}


/*  
Output:-
--------
Enter the size of the array: 5
Input the elements into the array: 4 3 2 10 12
Display the integer array After Insertion Sort: 2 3 4 10 12 


Enter the size of the array: 5
Input the elements into the array: 0900 0 0090 100 10
Display the integer array After Insertion Sort: 0 10 90 100 900
*/