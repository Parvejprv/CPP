/*
Topic: Pass by reference, Here value from the main() get pass to the Incr() with reference and only get increase to the Incr() function only, 
Because it does not get create a copy of the variable's value that is passed to the Incr(). It happens with the same value

Note: here we use ampersand symbol to the parameter that is passed

*/ 



#include<iostream>
using namespace std;

void Incr(int &n) {
  n++;
  cout << "This is from function Incr " << n << endl;
}

int main() {
  int a;
  cout << "Enter a : ";
  cin >> a;

  // pass by value
  Incr(a);
  cout<<"Value of a after calling the function: "<< a <<endl;
}


/* 
Output:-
-------
Enter a : 4
This is from function Incr 5
Value of a after calling the function: 4

*/