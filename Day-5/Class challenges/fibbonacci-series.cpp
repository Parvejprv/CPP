/* 
  Fibbonaci Series :
  ------------------
  Fibbonacci Series is a series of number that includes 0 and 1 , and every next number is the sum of previous 2 numbers.

  here is that
  0 1 1 2 3 5 8 13 21 ....
*/


#include<iostream>
using namespace std;

int main() {
  
  int n;
  cout << "Enter the number : ";
  cin >> n;
  int last = 0; 
  int prev = 1;
  int curr;

  for(int i=3; i<=n; i++){
    curr = (last + prev);
    last = prev;
    prev = curr ;
  }
  cout << curr;
}