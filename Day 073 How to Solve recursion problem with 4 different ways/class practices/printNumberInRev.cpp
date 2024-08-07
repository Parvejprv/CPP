/*  


*/

#include<iostream>
using namespace std;

void print2(int num){
  // Base case
  if(num == 1){
    cout << num << " "; 
    return;
  }

  cout << num << " ";
  print2(num-1);
}

int main() {
  int n;
  cout << "enter the value of n: ";
  cin >> n;

  print2(n);

  return 0;
}



/*  
Output:-
----------
8 7 6 5 4 3 2 1

*/