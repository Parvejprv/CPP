/*  

Question:- Here is the example related to the pointer, try to find out the correct output of it.

*/

#include<iostream>
using namespace std;

int main()
{

  char c[] = "GATE2024";
  char *p = c; // p1 points to the first character of the string

  cout << p + p[3] - p[1] << endl;    // index address = base address + index * datatype(size)

  cout << c << endl;

}




/*  
Output:-
----------
0 2


2024
GATE2024
*/







