#include<iostream>
using namespace std;

int main() {

  int a = 20;
  int *ptr = &a;

  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  cout<<sizeof(ptr)<<endl;      // size 4 byte
  int b = 30;
  ptr = &b;
  cout<<ptr<<endl;
  cout<<*ptr<<endl;
  cout<<sizeof(ptr)<<endl;      // size = 4 byte


  return 0;
}

/*  
Output:-
--------
0x61ff08
20
4
0x61ff04
30
4
*/