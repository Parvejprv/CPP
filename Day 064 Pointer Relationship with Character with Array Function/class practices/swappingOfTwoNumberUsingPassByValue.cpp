/*  
Swapping of two integer type value using the pass by value technique.

*/


/* Note: these value can not be directly changed, because we are trying using pass by value. */


#include<iostream>
using namespace std;
void swapping(int p1, int p2)   // pass by value
{  
  int temp = p1;
  p1 = p2;
  p2 = temp;
  cout << &p1 << endl;
  cout << &p2 << endl;
  cout << p1 << " " << p2 << endl;
}

int main() {
  int first = 10, second  = 20;
  cout << &first << endl;
  cout << &second << endl;
  swapping(first, second);
  cout << "After: " << first << " " << second << endl;

  return 0;
}




/*  
Output:-
---------
0x61fefc
0x61fef8
0x61fee0
0x61fee4
20 10
After: 10 20



Note: we can directly change the value using the pass by pointer, and address remain same. Because we have the address of that particular memory so that we can changed it easily.

*/