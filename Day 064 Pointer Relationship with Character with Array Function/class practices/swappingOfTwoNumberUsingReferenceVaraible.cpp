/*  
Question:- Swapping of two number using the reference variable.

*/
#include<iostream>
using namespace std;
void swapping(int &refP1, int &refP2)
{
  int temp = refP1;
  refP1 = refP2;
  refP2 = temp;

  cout << &refP1 << endl;
  cout << &refP2 << endl;
}

int main() {
  int first = 10, second = 20;
  cout << &first << endl;
  cout << &second << endl;
  swapping(first, second);
  cout << first << " " << second << endl;

  return 0;
}



/*  
Note: here it would pointing to the same address, and got swapped using reference variable.

Output:-
----------
0x61ff0c
0x61ff08
0x61ff0c
0x61ff08
20 10

*/







