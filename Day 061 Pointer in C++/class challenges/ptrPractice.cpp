/*  
Pointer in CPP
*/

#include<iostream>
using namespace std;
int main(){
  int a = 10;
  // Print the address of a
  cout << &a << endl;       // it is an hexadecimal number, 0x61ff0c

  // print the address using the pointer
  int *ptr = &a;
  cout << ptr << endl;      // 0x61ff08
  // cout << << endl;


  // 
  float b = 3.145;
  float *ptr2 = &b;
  cout << ptr2 << endl;     // 0x61ff00



  // How to print the value inside the pointer, using the de-reference operator we can print the value inside the pointer which holds the value of it
  cout << *ptr << endl;     // 10
  cout << *ptr2 << endl;
  a++;

  cout << *ptr << endl;     // 11

  // Now, after doing the certain operation we need to store the address of c into the ptr var, here it is
  int c = 30;
  ptr = &c;
  cout << ptr << endl;    // 0x61fefc 
  cout << *ptr << endl;   // 30
  // size of ptr
  cout << "size of pointer ptr = " << sizeof(ptr) << endl;
  cout << endl;

  // character type pointer
  char ch = '@';
  char *chPtr = &ch;
  cout << chPtr << endl;
  // cout << *chPtr << endl;
  cout << "size of character pointer chPtr = " << sizeof(chPtr) << endl;





  cout << endl;
  int *p;
  int d = 20;
  p = &d;
  cout << p << endl;       // 0x61fef4 (address of d)
  cout << *p << endl;       // 20  (value of pointer ptr)
  int e = 80;
  p = &e;
  cout << "size of pointer p = " << sizeof(p) << endl;
  cout << p << endl;         // 0x61fef0  (address of e)
  cout << *p << endl;       // 80










  return 0;
}


/*  
Note:-
1. Pointer does not depends on datatype, it depends on its RAM.
2.why we use the datatype in pointer?
ans :- it is pointing to a address which holds the value of the given data type

*/









/*  
Output:-
-----------

0x61ff04
0x61ff04

0x61ff00

10
3.145

0x61fefc
30

*/