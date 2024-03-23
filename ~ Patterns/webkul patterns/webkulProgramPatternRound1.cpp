


/*  


*       *
**     **
***@@@***
   @@@
   @@@
   ***
    *



*/








#include<iostream>
using namespace std;
int main() {
  int n;

  cout << "Enter the size:";
  cin >> n;

  // Check if n is even or odd
  if(n%2 == 0){
    return 0;
  }
  else {
    int x = (n+n+n)-2;
    // Print the top part of the pattern
    for(int i = 1; i <= n; i++){
      // left side triangle
      for(int j=0; j<i; j++){
        cout << "*" ;
      }
      if(i == n){
        for(int j=0; j<x; j++){
          cout << "@";
        }
        x -= 2;
      } else {
        for(int j=0; j<x; j++){
          cout << " ";
        }
        x -= 2;
      }
      for(int j=0; j<i; j++){
        cout << "*" ;
      }
      cout << endl;
    }

    for(int i=1; i<n; i++){
      for(int j=0; j<n; j++){
        cout << " ";
      }
      for(int j=0; j<n; j++){
        cout << "@";
      }
      cout << endl;
    }
    // cout << "n = " << n;

    // Print the bottom part of the pattern
    int k = n;
    int x1 = n;
    for(int i=x1; i>0; i-=2){
      for(int j=0; j<k; j++){
        cout << " ";
      }
      k++;
      for(int j=0; j<x1; j++){
        cout << "*";
      }
      x1 -= 2;
      cout << endl;
    }
  }


  return 0;
}