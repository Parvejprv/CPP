/**************************************************  

Pattern No. 06
--------------
n=5
  1   2   3   4   5 
  6   7   8   9  10
 11  12  13  14  15
 16  17  18  19  20
 21  22  23  24  25


****************************************************/


#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5;

  int x = 1;
  // for(int i=1; i<=n; i++){
  //   for(int j=n; j>=1; j--){
  //     cout << setw(3) << x << " ";
  //     x+=1;
  //   }
  //   cout  << endl;
  // } 
  
  // Or

  for(int i=n; i>=1; i--){
    for(int j=n; j>=1; j--){
      cout << setw(3) << x << " ";
       x+=1;
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
  1   2   3   4   5 
  6   7   8   9  10
 11  12  13  14  15
 16  17  18  19  20
 21  22  23  24  25

*/



