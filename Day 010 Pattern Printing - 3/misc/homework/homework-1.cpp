/* 
HW-1. Triangle pattern with spacing

44444
44444
44444
44444
44444



*/

#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "enter n : ";
  cin >> n;




  for(int i=1; i<=n; i++){
    
    // pattern
    for(int j=1; j<=n; j++) {
      cout << 2*2;
    }
    cout << endl;
  }
  
  return 0;
}