/*  
Topic:-
==========

Pointer in CPP
-----------------
Let's do some test-practice and examine the pointer in detail.

*/


#include<iostream>
using namespace std;

int main() {
  int a = 10;

  // Print the address of a
  cout << "address  of a:" << &a << endl;    // address of a
  int *ptr = &a;
  cout << "address  of a:" << ptr << endl;    // address of a

  float m = 2.67;
  float *ptr1 = &m;
  cout  << ptr1 << endl;


  cout << "size of pointer ptr: " << sizeof(ptr) << endl;

  return 0;
}