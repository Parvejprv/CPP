/*  

Question: Increment using the reference variable.
---------------------------------------------------



Note: 
- While try to use the reference variable need to pass the value not address of the variable while calling the function.
- also use the reference variable to point the same var.
- we can use multiple reference variable to point the same object from different references.
*/


#include<iostream>
using namespace std;
void increment(int &ref){
  ref += 1;     // using a reference variable
}

int main() {

  int num = 100;
  increment(num);
  cout << num << endl;

  return 0;
}




/*  
Output:-
---------
101

*/