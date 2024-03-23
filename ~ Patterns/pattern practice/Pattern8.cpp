/**************************************************  

Pattern No. 08
--------------
n=5
  2   4   6   8  10
 12  14  16  18  20
 22  24  26  28  30
 32  34  36  38  40
 42  44  46  48  50


****************************************************/


#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5;

  int x = 2;
  // for(int i=1; i<=n; i++){
  //   for(int j=n; j>=1; j--){
  //     cout << setw(3) << x << " ";
  //     x+=2;
  //   }
  //   cout  << endl;
  // } 
  
  // Or

  for(int i=n; i>=1; i--){
    for(int j=n; j>=1; j--){
      cout << setw(3) << x << " ";
      x+=2;
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
  2   4   6   8  10
 12  14  16  18  20
 22  24  26  28  30
 32  34  36  38  40
 42  44  46  48  50

*/



