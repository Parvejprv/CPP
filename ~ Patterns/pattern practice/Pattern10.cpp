/**************************************************  

Pattern No. 10
--------------
n=5
 11  21  31 
 12  22  32
 13  23  33
 14  24  34
 15  25  35


****************************************************/


#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5, m = 3;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      cout << setw(2) << j << i <<" ";
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
 11  21  31 
 12  22  32
 13  23  33
 14  24  34
 15  25  35

*/



