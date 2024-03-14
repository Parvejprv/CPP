/*  
Question: - Write the Program of insertion sort of an integer array and sort the array in increasing order (start the loop from last)
*/

#include<iostream>
using namespace std;
int main() {
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the Integer elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Insertion Sort Ascending Order, So that we need to search for the largest element
  for(int i=n-2; i>=0; i--){
    for(int j=i; j<n-1; j++){
      if(arr[j] > arr[j+1]){
        //swap(arr[j], arr[j+1]);

        // Or Swap Manualy
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;

        // cout << "After Swap: " << endl;
        // for(int i=0; i<n; i++){
        //   cout << arr[i] << " at index - " << i << endl; 
        // }
      } 
    }
  }

  // Display the array elements after Insertion Sort
  cout << "Display the Integer array In Ascending Order After Insertion Sort: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

}


/*  
Output:-
---------

Enter the size of the array: 5
Input the Integer elements into the array: 7 5 2 4 3
Display the Integer array In Ascending Order After Insertion Sort: 2 3 4 5 7 

*/