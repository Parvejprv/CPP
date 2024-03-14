/* 
  Author    :     Parvej Alam
  Date      :     04-10-2k23

*/

// Question 1. Take an integer number input from the user and print all the even number between 1 to n (inclusive), Do this using the while and do while loop seperately.

#include<iostream>
using namespace std;

int main() {

  int n;
  cout << "enter number n : ";
  cin >> n;

  // Using while loop
  // int i = 1;
  // while (i <= n) {
  //   if(i%2 == 0) {          // printing the odd number
  //     cout << i << endl;
  //   }
  //   i++;
  // }

  // Using do-while
  int i = 1;
  do{
    if( i%2 == 0) {
      cout << i << endl;
    }
    i++;
  } while (i <= n);
    
}


/* 
Output
-------

enter number n : 20
2
4
6
8
10
12
14
16
18
20

*/