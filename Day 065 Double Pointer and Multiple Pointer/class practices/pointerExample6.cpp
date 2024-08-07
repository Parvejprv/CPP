/*  

Question:- Here is the example related to the pointer, try to find out the correct output of it.

*/

#include<iostream>
using namespace std;

int main()
{

  int a = 5, b = 10;
  int &name = a;
  int *ptr = &a;
  (*ptr)++;
  ptr = &b;
  *ptr = *ptr+5;
  name += 5;
  cout << a << " " << b << endl; 

}




/*  
Output:-
----------
11 15

*/







