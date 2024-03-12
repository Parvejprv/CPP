/*  
Question:- Write a Selection Sort Program using the Static array of integer type.

*/


// Note:- If here user gives that the size of the array would be beyond 1000

#include<iostream>
using namespace std;
int main() {
  int arr[1000];
  int size, index;
  cout <<  "Enter the size of the array: ";
  cin >> size;

  // take array elements input from the user
  cout << "Inputs the elements of the array: ";
  for(int i=0; i<size; i++){
    cin >> arr[i] ;
  }

  // Selection sort
  for(int i=0; i<size-1; i++){
    // cout << arr[i] << " " << endl;
    index = i;
    for(int j = i+1; j<size; j++){
      if(arr[j] < arr[index]){
        index = j;
      }
    }
    // swap
    swap(arr[i], arr[index]);
  }

  //  Display the array after performing the selection sort
  cout << "Array Elements after Sorting: ";
  for(int i=0; i<size; i++){
    cout << arr[i] << " ";
  }

}



/*  
Output:-
---------
Enter the size of the array: 7
Inputs the elements of the array: 10 2 1 4 7 0 9
Array Elements after Sorting: 0 1 2 4 7 9 10


Enter the size of the array: 9
Inputs the elements of the array: 10 2 30 19 3 1 90 54 0
Array Elements after Sorting: 0 1 2 3 10 19 30 54 90
*/















/*
#include<iostream>
using namespace std;
int main() {
  int arr[6] = {10,4,1,3,2,7};

  // Selection sort

  // here we have to run a loop till less than n-1 that means 5 here (but we are starting here from 0 so that it may ends less than 5), and after completing the inner loop we need to swap these two index's elements
  for(int i=0; i<5; i++){
    // cout << arr[i] << " " << endl;
    int index = i;
    for(int j = i+1; j<6; j++){
      if(arr[j] < arr[index]){
        index = j;
      }
    }
    // swap
    swap(arr[i], arr[index]);
  }

  //  print array after performing the selection sort
  cout << "Array Elements after Sorting: " << endl;
  for(int i=0; i<6; i++){
    cout << arr[i] << " ";
  }

}
*/

/*  
Output:-
--------
Array Elements after Sorting: 
1 2 3 4 7 10

*/