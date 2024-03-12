/*  
Pattern :

    *
   * *
  * * *
 * * * *
* * * * *

*/

#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size n : ";
  cin >> n;

  /* Logic:1 */
  // for(int i=1; i<=n; i++){
  //   // space and pattern
  //   for(int k=1; k<=n; k++){
  //     if(k >= n-i+1) {
  //       cout << "* ";
  //     } else {
  //       cout << " ";
  //     }
  //   }
  //   // Pattern

  //   cout << endl;
  // }

  
  /* Logic: 2 but it holds time complexity. */
  for(int i = 1;  i <= n; i++){
    // spaces
    for(int k = n-i; k >= 1; k--){
      cout << "_";
    }

    for(int k = 1; k <= i; k++) {
      cout << "* ";
    }
    cout << endl;
  }


}