/**************************************************  

Pattern No. 19
--------------
n=5

 1  0  1  0  1 
 0  1  0  1  0
 1  0  1  0  1
 0  1  0  1  0
 1  0  1  0  1


****************************************************/


#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5;

  for(int i=1; i<=n; i++){

    for(int j=1; j<=n; j++){
      cout  << setw(2) << ((i+j)%2 == 0) << " ";
    }
    cout  << endl;
  }

  return 0;
}

/*  
Output:-
--------
 1  0  1  0  1 
 0  1  0  1  0
 1  0  1  0  1
 0  1  0  1  0
 1  0  1  0  1




*/