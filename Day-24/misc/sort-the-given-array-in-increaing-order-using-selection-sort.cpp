/*  
Question :-
-----------

Sort the Given array with the help of selection sorting techniques (In Increasing Order).
*/



// #include<iostream>
// using namespace std;

// int main() {

//   int arr[5] = {10, 20, 3, 40, 5}; 


//   for(int i=0; i<5-1; i++){
//   int index = i;    //idx
 
//     for(int j=i+1; j<5; j++){
//       if(arr[j] < arr[index]) {
//         index = j;
//       }
//     }
//     swap(arr[index], arr[i]);

//    }
  
//   // display the array
//   cout << "Array in Increasing Order \n"; 
//   for(int i=0; i<5; i++){
//     cout << arr[i] << " ";
//   }
// }





/* 
With the help of the Function
-------------------------------

*/

#include<iostream>
using namespace std;

// Soring the array in  Increasing Order
void SortArray(int arr[], int n) {
  for(int i=0; i<5-1; i++){
    int index = i;    //idx
 
    for(int j=i+1; j<5; j++){
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

  int arr[n];

  // taking array's elements input from the user
  for(int i=0; i<n; i++) {
    cin >> arr[i];
  }

  // Function call
  SortArray(arr, n);
}


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