/* 
  Print nth fibbonacci
*/


#include<iostream>
using namespace std;

int main() {

  int n;
  cout << "enter n : ";
  cin >> n;
  int last = 0; int prev = 1; 
  int curr;
  for(int i=3; i<=n; i++){
    curr = (last + prev);
    last = prev;
    prev = curr;
  }
  cout << curr;

}