// Local Variable and local scope 
/*
#include<iostream>
using namespace std;

int main() {
  // Local Scope
  int x = 2;    // local scope
  cout << x;
   {
    int k = 50;     // here scope of this variable is valid inside only this function only.
   }   
}
*/


// Global Variable

#include<iostream>
using namespace std;

int y = 25;       // Global scope (Scope is valid to the whole program).
int main() {
  // Local Scope
  int x = 52;    // Global scope (inside only this function only).
  cout << x;
  cout << endl; 
  cout << y;        // here this variable is accessible globally

  // if(x <= 60){
  //   cout << "true";
  // }
}