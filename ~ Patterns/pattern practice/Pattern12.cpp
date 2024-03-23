/**************************************************  

Pattern No. 12
--------------
n=5
 1  6 11 16 21 
 2  7 12 17 22
 3  8 13 18 23
 4  9 14 19 24
 5 10 15 20 25


****************************************************/


#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5;

  for(int i=1; i<=n; i++){
    int x = i;
    for(int j=1; j<=n; j++){
      cout << setw(2) << x <<" ";
      x += n;
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
 1  6 11 16 21 
 2  7 12 17 22
 3  8 13 18 23
 4  9 14 19 24
 5 10 15 20 25

*/



