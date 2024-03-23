/**************************************************  

Pattern No. 11
--------------
n=5
 11  12  13 
 21  22  23
 31  32  33
 41  42  43
 51  52  53


****************************************************/


#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5, m = 3;

  for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
      cout << setw(2) << i << j <<" ";
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
 11  12  13 
 21  22  23
 31  32  33
 41  42  43
 51  52  53

*/



