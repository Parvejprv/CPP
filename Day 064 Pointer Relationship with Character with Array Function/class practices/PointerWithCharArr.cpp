
/*  
Pointer with character array
----------------------------------
- it gonna print the character untill the null character does not found.

*/


#include<iostream>
using namespace std;

int main() {
  char arr[5] = "1234";
  char *ptr = arr;
  cout << arr << endl;    // 1234
  cout << ptr << endl;    // 1234

  /* 
  type casting - character type pointer gonna type casted by void* pointer and it gonna print the address of character array 
  */
  cout << (void*)arr << endl;   // 0x61ff07
  cout << (void*)ptr << endl;   // 0x61ff07


  char name = 'a';
  cout << name << endl;
  cout << &name << endl;    // a1234
  cout << (void*) &name << endl;    // 0x61ff02
  char *charPtr = &name;

  cout << charPtr << endl;
  cout << (void*)charPtr << endl;

  // cout << "The value of arr[0] is " << arr[0] << endl;

}



/*  
Output:-
----------
1234
1234
0x61ff07
0x61ff07
a
a1234
0x61ff02
a1234
0x61ff02
*/