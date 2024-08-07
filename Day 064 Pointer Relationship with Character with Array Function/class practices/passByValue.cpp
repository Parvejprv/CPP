
/*  
Question | topic: 
-------------------
Pass by value, to swap the two value 
-------------------

*/




#include<iostream>
using namespace std;
void swapping(int p1, int p2){    // pass by value
  int temp = p1;
  p1 = p2; 
  p2 = temp;

  cout << p1 << " " << p2 << endl;
  cout << &p1 << endl;
  cout << &p2 << endl;
}

int main() {
  int first = 10, second  = 20;
  swapping(first, second);
  cout << &first << endl;
  cout << &second << endl;
  cout << first << " " << second << endl;

  return 0;
}




/*  
Output:-
----------
//------------------------------------------------
- Here we can see clearly that each of the variable consist of different address or memory location.
- That means it is not a proper way to swap the two value using the pass by value, we can not reach to their respective address.
//------------------------------------------------


Output:-
---------
20 10
0x61fef0
0x61fef4
0x61ff0c
0x61ff08
10 20


Note: here all the addresses are different so that swapping at reaching particular address is not possible.



*/



