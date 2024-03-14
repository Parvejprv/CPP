
/*  
Question 1. find the index of the intger array that has the minimum element of the array.

*/





/* ***************************************** */
/* Method 1.(Solution 1) : Without Function */

/*
#include<iostream>
using namespace std;
int main(){
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  // array elements input
  cout << "Input the array elements: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // find the minimum array index of integer type array
  int index = 0;
  for(int i=1; i<=n-1; i++){
    if(arr[i] < arr[index])
    index = i;
    // cout << "idx :" << index << endl;
  }

  cout << "minimum element index = " << index;
}
*/

/* 
Output:-
---------
Enter the size of the array: 5
Input the array elements: 9 3 10 1 4  
minimum element index = 3
*/

/* ***************************************** */



/* ***************************************** */
/* Method 2.(Solution 2) : With the help of Function */
#include<iostream>
using namespace std;
int findIndex(int arr[], int n){
  // find the minimum array index of integer type array
  int index = 0;
  for(int i=1; i<=n-1; i++){
    if(arr[i] < arr[index])
    index = i;
    // cout << "idx :" << index << endl;
  }
  return index;
  //cout << "minimum element index = " << index;
}
int main(){
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  // array elements input
  cout << "Input the array elements: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Find the index of min element of the integer array
  int index = findIndex(arr, n);
  cout << "Array's Minimum element index: " << index;
}

/* 
Output:-
---------
Enter the size of the array: 5
Input the array elements: 90 3 10 2 4
minimum element index = 3

Enter the size of the array: 5 
Input the array elements: 120 2 30 4 10
Array's Minimum element index: 1

Enter the size of the array: 5
Input the array elements: 10 20 203 3 4
Array's Minimum element index: 3
*/

/* ***************************************** */