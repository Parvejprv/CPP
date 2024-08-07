/*  

Question:- Here is the example related to the pointer, try to find out the correct output of it.

*/

#include<iostream>
using namespace std;
void second(int *p1, int *p2){
  // put the address of p2 into p1, and assign the value of pointer p2 equals 2
  p1 = p2;
  *p2 = 2;
}
int main()
{

  int i = 0, j = 1;
  second (&i, &j);
  cout<<i<<" "<<j<<endl;

}




/*  
Output:-
----------
0 2

*/







