/**************************************************  

Pattern No. 13
--------------
n=5
 1 10 11 20 21 
 2  9 12 19 22
 3  8 13 18 23
 4  7 14 17 24
 5  6 15 16 25


****************************************************/


#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5;

  for(int i=1; i<=n; i++){
    int x = i;
    int y = n-i+1;    // 5-1+1  -> 5

    for(int j=1; j<=n; j++){
      // here if, j would be odd then print x otherwise print y and after printing this add size(n) to the both
      if(j % 2 == 1){
        cout << setw(2) << x << " ";
      } else {
        cout << setw(2) << y << " ";
      }
      x += n;
      y += n;
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
 1 10 11 20 21 
 2  9 12 19 22
 3  8 13 18 23
 4  7 14 17 24
 5  6 15 16 25

*/



