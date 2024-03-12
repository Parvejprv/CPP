/*  
Question 2. Sort the Integer array in Reverse Manner in Decreasing order using the Selection Sort Algorithm in CPP.


*/


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
      if(arr[j] < arr[index]){
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
Input the elements into the array: 10 3 2 8 1

max index 4
10 3 2 8 1
max index 2
10 3 2 8 1
max index 1
10 3 8 2 1
max index 1
10 8 3 2 1

10 8 3 2 1

*/