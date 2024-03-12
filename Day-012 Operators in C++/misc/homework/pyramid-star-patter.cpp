/*  
Pattern 5. 
    *
   ***
  *****
 *******
*********


*/

#include<iostream>
using namespace std;

char ans;
int main() {
  int num;
  cout << "enter size num : ";
  cin >> num;
  int row, col;
  char ch;

  for(row=1; row<=num; row++) {
    // spaces
    for(int sp=num; sp>row; sp--) {
      cout << " ";
    }

    // pattern
    int n = num;
    for(col=1; col<=(row*2)-1; col++){
      cout << "*";
      n--;
    }
    cout << endl;
  }

}