/*  
Pattern :

    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
*/

#include<iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter the size n : ";
  cin >> n;

  /* Logic:1 */
  for(int i=1; i<=n; i++){
    // space and pattern
    for(int k=1; k<=n; k++){
      if(k >= n-i+1) {
        cout << "* ";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }
  for(int i=1; i<=n; i++){
    // space and pattern
    for(int k=1; k<=n-1; k++){
      if(k >= i) {
        cout << "* ";
      } else {
        cout << " ";
      }
    }
    cout << endl;
  }

  
  /* Logic: 2 but it holds time complexity. */
  // for(int i = 1;  i <= n; i++){
  //   // spaces
  //   for(int k = n-i; k >= 1; k--){
  //     cout << " ";
  //   }
  //   for(int p = 1; p <= i; p++) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }
  // for(int m = 1;  m <= n; m++){
  //   // spaces
  //   for(int k = n-m+2; k <= n ; k++){
  //     cout << " ";
  //   }
  //   for(int l = n; l >= m; l--) {
  //     cout << "* ";
  //   }
  //   cout << endl;
  // }


}