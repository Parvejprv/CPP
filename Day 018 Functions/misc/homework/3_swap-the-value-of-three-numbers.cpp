// Question:- Swap three digits number using the function.

#include<iostream>
using namespace std;

void Swap(int &a, int &b, int &c){
  // let say here- a=10, b=5,  c=3
  a = (a + b);    // 15
  b = (a - b);    // 10
  a = (a - b);    // 5
  c = (a + c);    // 5+3 = 8
  a = (c - a);    // 8-5 = 3
  c = (c - a);    // 8-3 = 5
}

int main() {
  int a, b, c;
  cout << "Enter three numbers: ";
  cin >> a >> b >> c;

  cout << "before\n";
  cout <<a<< " " <<b<< " " <<c<< endl;

  // Function call
  Swap(a, b, c);

  cout << "after\n";
  cout <<a<< " " <<b<< " " <<c<< endl;
  return 0;
}


/* 
Output:-
----------

Enter three numbers: 10 5 3
before
10 5 3
after
3 10 5

Enter three numbers: 10 20 30
before
10 20 30
after
30 10 20

*/