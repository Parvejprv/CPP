/*  
Topic: Recursion

Question print the array element using recursion and traverse the array from tail side and print one time reverse and one time forward array's value.

*/


/* 
Print array forward direction 
*/

#include<iostream>
using namespace std;

void print(int arr[], int index){
  if(index == -1)
  {
    return;
  }

  print(arr, index-1);
  cout << arr[index] << " ";
}

int main() {

  int arr[5] = {3, 7, 6, 2, 8};

  int n = sizeof(arr)/sizeof(arr[0]);
  int index = n-1;

  print(arr, index);

  return 0;
}


/*  
Output:-
---------
3 7 6 2 8

*/













/* Print array in reverse direction via traversing backward side. */


/* 

#include<iostream>
using namespace std;

void print(int arr[], int index){
  if(index == -1)
  {
    return;
  }

  cout << arr[index] << " ";
  print(arr, index-1);
}

int main() {

  int arr[5] = {3, 7, 6, 2, 8};

  int n = sizeof(arr)/sizeof(arr[0]);
  int index = n-1;

  print(arr, index);

  return 0;
}

*/




/*  
Output:-
----------
8 2 6 7 3 

*/

