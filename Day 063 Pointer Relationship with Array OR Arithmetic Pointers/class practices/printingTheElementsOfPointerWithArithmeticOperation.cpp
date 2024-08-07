/*  
Quetion:
Print the array elements using the pointer with aithmetic operators.

here I wanna point the last element of the arr using pointer.
*/


#include<iostream>
using namespace std;

int main() {

  int arr[5] = {2,4,6,8,10};
  int *ptr = &arr[4];

  for(int i=0; i<5; i++){
    cout << *ptr <<  " ";
    ptr--;
  }

  return 0;
}