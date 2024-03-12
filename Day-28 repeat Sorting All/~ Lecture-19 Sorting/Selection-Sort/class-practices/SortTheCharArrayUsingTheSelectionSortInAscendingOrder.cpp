/*  
Question 1. 
Sort the array of integer type using the selection sort in Ascending order.
*/


/* Solution 1. Method 1. :- without Using Function */

/*
#include<iostream>
using namespace std;
int main() {
  char arr[100];
  int n;
  cout << "Enter the Size of the array: ";
  cin >> n;

  // take array elements input into the array
  cout << "Input the character elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }


  // Selection Sort
  for(int i=0; i<n; i++){
    int index = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] < arr[index]){
        index = j;
      }
    }
    // swap
    // swap(arr[index], arr[i]);

    // swapping
    int temp = arr[index];
    arr[index] = arr[i];
    arr[i] = temp;

  }

  // Display the array element
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }
}
*/

/*  
Output:-
--------
Enter the Size of the array: 5
Input the character elements into the array: p q a c b
Character Array element After Sorting using the Selection sort in Ascending Order :
q p c b a

*/





/*  Solution 2. Or Method 2. :- With the help of the function */

#include<iostream>
using namespace std;
void sortTheArrayUsingTheSelectionSortInAscendingOrder(char arr[], int n) {
  for(int i=0; i<n; i++){
    int index = i;
    for(int j=i+1; j<n; j++) {
      if(arr[j] < arr[index]){
        index = j;
      }
    }
    // swap
    // swap(arr[index], arr[i]);

    // swapping
    int temp = arr[index];
    arr[index] = arr[i];
    arr[i] = temp;
  }
}
int main() {
  char charArr[100];
  int n;
  cout << "Enter the Size of the array: ";
  cin >> n;

  // take array elements input into the array
  cout << "Input the character elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> charArr[i];
  }

  // function call
  sortTheArrayUsingTheSelectionSortInAscendingOrder(charArr, n);

  // Display the array element in Descending Order
  cout << "Character Array element After Sorting using the Selection sort in Ascending Order : " << endl;
  for(int i=0; i<n; i++){
    cout << charArr[i] << " ";
  }
}


/* 
Output:-
--------
Enter the Size of the array: 5
Input the character elements into the array: a e i d p
Character Array element After Sorting using the Selection sort in Ascending Order :
a d e i p

Enter the Size of the array: 5
Input the character elements into the array: a e r o p
Character Array element After Sorting using the Selection sort in Ascending Order :
a e o p r
*/