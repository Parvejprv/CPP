/*  
Topic:-
========
Memory Management
---------------------
While executing the program, first main() will gonna run from stack initially, and other function that is called in main() gonna call into stack.



How to allocate the memory in HEAP, 
- new keyword is used to store the memory address in large size from heap.
- delete is used to released the memory | address.


int *ptr = new int;     // integer
float *ptr2 = new float;
int *ptr = new int[20];   // arr


// delete keyword is used to delete the memory that is allocated in Heap
  delete ptr;
  delete ptr2;

  delete[] p1; // delete the memory allocated for the array






*/



#include<iostream>
using namespace std;

int main() {
  int *ptr = new int;   // create memory in heap
  cout << ptr << endl;    // address
  *ptr = 10;              // assign value
  cout << *ptr << endl;   // value

  float *ptr2 = new float;   // create memory in heap
  cout << ptr2 << endl;    // address
  *ptr2 = 3.1452;              // assign float value
  cout << *ptr2 << endl;   // value


  int n;
  cout << "enter the size of the array: ";
  cin >> n;
  int *p1 = new int[n];
  for(int i=0; i<n; i++){
    p1[i] = i+1;
  }
  for(int i=0; i<n; i++){
    cout << p1[i] << " ";
  }




  // delete keyword is used to delete the memory that is allocated in Heap
  delete ptr;
  delete ptr2;

  delete[] p1; // delete the memory allocated for the array

  return 0;
}









/*  
Output:-
---------
0xf416c0
10
0xf416d0
3.1452
enter the size of the array: 5
1 2 3 4 5

*/





