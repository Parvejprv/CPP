/*
=> Here is the First Question demo example, using the while loop.

1). Print number from 1-10.   

*/
#include<iostream>
using namespace std;

int main() {
  int n;    // declaration of size n
  int i=1;  // initialization
  cout << "Enter number(size) : ";
  cin >> n;       // input

  while(i <= n) {     
    cout << i << " ";
    i++;            // updation
  }
}