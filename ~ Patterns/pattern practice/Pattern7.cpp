/**************************************************  

Pattern No. 07
--------------
n=5
  1   3   5   7   9
 11  13  15  17  19
 21  23  25  27  29
 31  33  35  37  39
 41  43  45  47  49


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
  //     x+=2;
  //   }
  //   cout  << endl;
  // } 
  
  // Or

  for(int i=n; i>=1; i--){
    for(int j=n; j>=1; j--){
      cout << setw(3) << x << " ";
      x+=2;
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
  1   3   5   7   9
 11  13  15  17  19
 21  23  25  27  29
 31  33  35  37  39
 41  43  45  47  49

*/



