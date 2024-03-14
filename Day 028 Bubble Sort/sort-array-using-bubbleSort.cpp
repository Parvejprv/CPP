/*  
Bubble Sort Increasing Order

*/



#include<iostream>
using namespace std;

// sort the array using the bubble sort algorithm for sorting
void SortArray(int arr[], int n) {
  for(int i=n-2; i>=0; i--){  // Passes:- 0-3, 0-2,0-1,0-0
    // compare each pair of adjacent elements in the array and swap them if they are not sorted correctly.
    for(int j=0; j<=i; j++){    
      // here in each of the pass j varry an compare to its adjacent elements, if it is greater or small (to sort ascending or descending order)
      if (arr[j] > arr[j+1]){
        //swap arr[j] with arr[j+1];
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;

        // or swap()
        // swap(arr[j], arr[j+1]);
        }
    }
  }

  // display array after sorting
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}

int main() {
  int n; 
  cout << "Enter the size of the array : \n";
  cin >> n;

  int arr[n];

  cout << "Input the elements of the array : \n";
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  SortArray(arr, n);

}

/*  

Output:-
---------

Enter the size of the array : 
5
Input the elements of the array :
4 5 3 7 8
3 4 5 7 8



Enter the size of the array : 
5
Input the elements of the array :
7 4 8 5 3
3 4 5 7 8
*/