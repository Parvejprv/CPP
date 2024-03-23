/**************************************************  
 * Some of the extra patterns,
****************************************************/



// Pattern No. 000

// #include<iostream>
// #include<iomanip>

// using namespace std;
// int main() {
//   int n = 5;
  
//   for(int i=n; i>=1; i--){
//     for(int j=n; j>=1; j--){
//       cout << setw(3) << i*j << " ";
//     }
//     cout  << endl;
//   }

//   return 0;
// }


/*  
Output:-
---------
 25  20  15  10   5 
 20  16  12   8   4
 15  12   9   6   3
 10   8   6   4   2
  5   4   3   2   1

*/







// *************************************************
// Pattern. 001



#include<iostream>
#include<iomanip>

using namespace std;
int main() {
  int n = 5;

  for (int i = 1; i <= n; i++){
    for (int j = n; j >= 1; j--){
      cout << setw(3) << i * j << " ";
    }
    cout << endl;
  }

  return 0;
}

/*  
Output:-
---------
  5   4   3   2   1 
 10   8   6   4   2
 15  12   9   6   3
 20  16  12   8   4
 25  20  15  10   5
 
*/












// *************************************************