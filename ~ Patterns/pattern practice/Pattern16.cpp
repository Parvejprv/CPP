/**************************************************  

Pattern No. 16
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
      cout << ((i+j) -1) << " ";
    }
    cout  << endl;
  }

  cout << endl;
  
  for(int i=n; i>=1; i--){

    for(int j=1; j<=n; j++){
      cout << ((i+j) -1) << " ";
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
// A. (output)
1 2 3 4 5 
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9


// B. (output)
5 6 7 8 9 
4 5 6 7 8
3 4 5 6 7
2 3 4 5 6
1 2 3 4 5
*/



