
/* 
Question:- Sort the given char array using the selection sort in increasing order, With the help of the Function.
-------------------------------

*/

#include<iostream>
using namespace std;

// Soring the array in  Increasing Order
void SortCharArray(char arr[], int n) {
  for(int i=0; i<n-1; i++){
    int index = i;    //idx
 
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[index]) {
        index = j;
      }
    }
    swap(arr[index], arr[i]);

  }

  // Display the array elements after sorting
  cout << "Array in Increasing Order \n"; 
  for(int i=0; i<5; i++){
    cout << arr[i] << " ";
  }

}

int main() {

  int n;
  cout << "Enter the size of the array : \n";
  cin >> n;

  char arr[n];

  // taking array's elements input from the user
  cout << "enter the character input in character array : ";
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  // Function call
  SortCharArray(arr, n);
}



/*  
Output:-
-------
Enter the size of the array : 
5
enter the character input in character array : p q m i a
Array in Increasing Order
a i m p q

*/




/*  

Time Complexity of  selection Sort algorithm
---------------------------------

TC:-
O(n^2)  -  worst case
Omega(n^2)  - Best case
Theta(n^2)  - average case

Space Complexity:-
------------------
SC: 
Auxilary:- O(1)
Total Space Complexity: O(n)

*/