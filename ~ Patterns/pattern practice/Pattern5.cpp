/**************************************************  

Pattern No. 05
--------------
n=5
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1


****************************************************/


#include<iostream>
using namespace std;
int main() {
  int n = 5, i, j;

  for(int i=1; i<=n; i++){
    for(int j=n; j>=1; j--){
      cout << j << " ";
    }
    cout  << endl;
  } 
  
  // Or

  // for(int i=n; i>=1; i--){
  //   for(int j=n; j>=1; j--){
  //     cout << j << " ";
  //   }
  //   cout  << endl;
  // }

  return 0;
}


/*  
Output:-
---------
5 4 3 2 1 
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1

*/



