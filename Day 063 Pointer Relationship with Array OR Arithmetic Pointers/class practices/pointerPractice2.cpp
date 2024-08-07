/*  
Topic:-
===========

Pointer relationship with array
----------------------------------

Let suppose an array of size 5 is given with elements as, let the base address would be 500 then,

int arr[5] =  {11, 7, 8, 12, 14};

int *ptr0 = &arr[0];
int *ptr1 = &arr[1];
int *ptr2 = &arr[2];
int *ptr3 = &arr[3];
int *ptr4 = &arr[4];

And, 
arr, arr+1, arr+2, arr+3, arr+4
500,  504,   508,   512,   516

Now, a question comes to mind? sir how computer know/calculate the address of ith index:-

-------------------------------------------------------
 ith index address = Base address + i * datatype-size
-------------------------------------------------------



*/




#include<iostream>
using namespace std;
int main(){
  int arr[5] = {1, 2, 3, 4, 5};     // integer array


  // Let suppose I want to print the arrays value using the pointer i.e. arr[i] = *(arr + i) and this is same here
  
  // // Let's print the values of the given array elements
  // cout << "Let's print the value of the array elements using the pointer :- " << endl;
  // for(int i=0; i<5; i++){
  //   cout << *(arr+i) << " ";
  // }


  // // Now, let print the address of the given array element
  // cout << "Let's print the address of the array elements using the pointer :- " << endl;
  // for(int i=0; i<5; i++){
  //   cout << (arr+i) << endl;
  // }

  int *ptr = arr;
  // Print the address of the first element
  cout << "The address of the first element : ";
  cout << arr << endl;
  cout << arr+0 << endl;       // same as above line
  cout << &arr[0] << endl;    // same as above two lines.
  cout << ptr << endl;        // same as above three lines.

  // Print the address of the second index
  cout << "Print the address of the second index : ";
  cout << arr+1 << endl;
  cout << arr[1] << endl;      // this will also give us the address of



  return 0;
}


/*  
Output:-
---------
Let's print the value of the array elements using the pointer :- 
1
2
3
4
5

Let's print the address of the array elements using the pointer :- 
0x61fef4
0x61fef8
0x61fefc
0x61ff00
0x61ff04

// Print the address of the first element
0x61fef8
0x61fef8
0x61fef8
0x61fef8


*/