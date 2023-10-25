/*
Topic: Pass by value, Here value from the main() get pass to the Incr() and only get increase to the Incr() function only, 
Because it get create a copy of the same variable's value that is passed to the Incr().


*/ 



#include<iostream>
using namespace std;

void Incr(int n) {
  n++;
  cout << "This is from function Incr " << n << endl;
}

int main() {
  int a;
  cout << "Enter a : ";
  cin >> a;

  // pass by value
  Incr(a);
  cout<<"Value of a after calling the function: "<<a<<endl;
}


/* 
Output:-
-------
Enter a : 4
This is from function Incr 5
Value of a after calling the function: 4

*/