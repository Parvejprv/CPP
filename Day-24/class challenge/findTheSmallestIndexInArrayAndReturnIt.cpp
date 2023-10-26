/*  
Question :-
-----------

Find the smallest element index and return it.

*/

#include<iostream>
using namespace std;

int main() {

  int arr[5] = {10, 20, 3, 40, 5}; 
  // int n = sizeof(arr)/sizeof(arr[0]);

  int index = 0;    //let initially 
  for(int i=0; i<5; i++){
    if(arr[i] < arr[index]) {
      index = i;
    }
  }
  
  cout << "Smallest Element index = " << index;
}