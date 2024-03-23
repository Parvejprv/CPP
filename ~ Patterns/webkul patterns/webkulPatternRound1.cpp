#include<iostream>
using namespace std;

int main() {
  int n;

  cout << "Enter the size:";
  cin >> n;

  // Check for the number if odd or even
  if(n%2 == 0){
    return 0;
  } else {
    int x = (n+n+n) - 2;
    for(int i=1; i<=n; i++){
      for(int j=0; j<i; j++){
        cout << "*";
      }
      // check if i==n then print "@" else print " "
      if(i == n){
        for(int j=0; j<x; j++){
          cout << "@";
        }
        x-=2;
      } else {
        for(int j=0; j<x; j++){
          cout << " ";
        }
        x-=2;
      }
      for(int j=0; j<i; j++){
        cout << "*";
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

    int k = n;
    int x1 = n;
    for(int i=x1; i>=1; i-=2){
      for(int j=0; j<k; j++){
        cout << " ";
      }
      k++;
      for(int j=0; j<x1; j++){
        cout << "*";
      }
      x1-=2;
      cout << endl;
    }
  }

  return 0;
}


/*  
Output:-
---------
Enter the size: 3

**     **
***@@@***
   @@@
   @@@
   ***
    *

Enter the size:5

*             *
**           **
***         ***
****       ****
*****@@@@@*****
     @@@@@
     @@@@@
     @@@@@
     @@@@@
     *****
      ***
       *
*/