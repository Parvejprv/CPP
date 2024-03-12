/* 
Pyramid pattern contigious num,

        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

*/


#include<iostream>
using namespace std;

int main() {
  int n;

  cout << "enter n : ";
  cin >> n;

  for(int i=0; i<n; i++){

    int k = 1;
    for(int j=1; j<=2*n-1; j++) {
      if(j>=n-i && j<=n+i)
        cout << k++ << " ";
      else
        cout << "  ";
    }
    cout << endl;

  }
  return 0;
}