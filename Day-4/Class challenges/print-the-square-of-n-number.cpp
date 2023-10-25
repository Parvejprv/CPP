/* 
      Author   :   Parvej Alam

*/

/*
  (1). Print the square of n numbers, here size is input by the user. Square of numbers (1 to n).
*/

#include<iostream>
using namespace std;

int main() {

  int n;
  cout <<  "Enter the number n : ";
  cin >> n;

  if(n > 0 || n <0) {
    
    for(int i=1; i<=n; i++) {
      cout << "Square of " << i <<" is : " << (i * i);
      cout << endl;
    }

  }
}

