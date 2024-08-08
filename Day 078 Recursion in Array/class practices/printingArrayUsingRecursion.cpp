/*  
Topic:- Recursion

Question: WAP to print the array element with the help of recursion.

- Print the array value forward and backward direction both.

*/



/* Backward direction printing array value - Here we are using three value as argument.*/

#include<iostream>
using namespace std;

void print(int arr[], int index, int n){
  if(index == n)
  {
    return;
  }

  print(arr, index+1, n);
  cout << arr[index] << " ";
}

int main() {

  int arr[5] = {3, 7, 6, 2, 8};

  int n = sizeof(arr)/sizeof(arr[0]);

  print(arr, 0, n);

  return 0;
}

/*  
Output:-
---------
8 2 6 7 3

*/

















/* Forward direction printing array value */

/*  

#include<iostream>
using namespace std;

void print(int arr[], int index, int n){
  if(index == n)
  {
    return;
  }

  cout << arr[index] << " ";
  print(arr, index+1, n);
}

int main() {

  int arr[5] = {3, 7, 6, 2, 8};

  int n = sizeof(arr)/sizeof(arr[0]);

  // cout << sizeof(arr) << endl;
  // cout << sizeof(arr[0]) << endl;
  // cout << (n) << endl;

  print(arr, 0, n);

  return 0;
}

*/


/*  
Output:-
---------
3 7 6 2 8

 
*/