/* 
    Print the table of a given number.

*/

#include<iostream>
using namespace std;

int main() {
  int num;

  cout << "enter the number : ";
  cin >> num;


  // // Table form
  // for(int i = 1; i <= 10; i++) {
  //   cout << "table : " ;
  //   cout << num <<" X "<< i << " = " << num*i << endl; 
  // }

  // Table in reverse form
  for(int i = 10; i >= 1; i--) {
    cout << "table : " ;
    cout << num <<" X "<< i << " = " << num*i << endl; 
  }

}