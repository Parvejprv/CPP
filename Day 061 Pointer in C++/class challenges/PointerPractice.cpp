#include<iostream>
using namespace std;

int main() {
  /*  
  int a = 10;
  // Print the address of a
  cout << &a << endl;     // address - 0x61ff0c

  int *ptr = &a;
  cout << *ptr << endl;     // value - 10
  cout << ptr << endl;      // address - 0x61ff0c

  cout << sizeof(ptr) << endl;    // 4 byte

  double m = 3.14;
  cout << sizeof(m) << endl;    // 8 byte
  
  */

  int a = 10;
  int *ptr = &a;
  cout << *ptr << endl;     // value - 10
  cout << ptr << endl;     // address of a - 0x61ff08
  int b = 20;
  ptr = &b;
  cout << *ptr << endl;     // value - 20
  cout << ptr << endl;       // address of b - 0x61ff04

  b = 30;                // re-assign value of b
  cout << *ptr << endl;    // value of b - 30

  

  return 0;
}
