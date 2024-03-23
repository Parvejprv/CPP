/**************************************************  

Pattern No. 17
--------------
n=5

 


****************************************************/


#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5;

  for(int i=1; i<=n; i++){

    for(int j=1; j<=n; j++){
      cout  << setw(2) << (2*(i+j)-3) << " ";
    }
    cout  << endl;
  }

  cout << endl;
  
  for(int i=n; i>=1; i--){

    for(int j=1; j<=n; j++){
      cout << setw(2) << (2*(i+j) -3) << " ";
    }
    cout  << endl;
  }

  cout << endl;

  for(int i=n; i>=1; i--){

    for(int j=1; j<=n; j++){
      cout << setw(2) << (2*(i+j) -2) << " ";
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
// A. (output)
 1  3  5  7  9 
 3  5  7  9 11
 5  7  9 11 13
 7  9 11 13 15
 9 11 13 15 17


// B. (output)
 9 11 13 15 17
 7  9 11 13 15
 5  7  9 11 13
 3  5  7  9 11
 1  3  5  7  9

 10 12 14 16 18
 8 10 12 14 16
 6  8 10 12 14
 4  6  8 10 12
 2  4  6  8 10
*/



