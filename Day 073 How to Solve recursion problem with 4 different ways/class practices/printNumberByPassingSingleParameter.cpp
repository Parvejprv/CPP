/*  
Topic:
---------
Recursion


Question : print the number from 1 to N using the recursion. by passing single param.

*/

#include<iostream>
using namespace std;

// 5 4 3 2 1
void print(int num){    // 5, 4
  if(num == 1){     // 1==5 F, 1 == 4 F, 1 == 3 F, 1 == 2 F, 1 == 1 T
    cout << num << " ";
    return ;
  }
  
  cout << num << " ";
  print(num-1);
}

// 1, 2, 3, 4, 5
void print1(int num){    // 5, 4
  if(num == 1){     // 1==5 F, 1 == 4 F, 1 == 3 F, 1 == 2 F, 1 == 1 T
    cout << num << " ";
    return ;
  }
  
  print1(num-1);
  cout << num << " ";
}
int main() {
  int n = 5;
  print(n);
  cout << endl;

  print1(n);

  return 0;
}

/*  
Output:-
-----------
1 2 3 4 5

*/





