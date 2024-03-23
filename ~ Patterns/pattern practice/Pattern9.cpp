/**************************************************  

Pattern No. 09
--------------
n=5
 1  2  3  4  5 
 2  4  6  8 10
 3  6  9 12 15
 4  8 12 16 20
 5 10 15 20 25


****************************************************/


#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      cout << setw(2) << i*j << " ";
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
 1  2  3  4  5 
 2  4  6  8 10
 3  6  9 12 15
 4  8 12 16 20
 5 10 15 20 25

*/



