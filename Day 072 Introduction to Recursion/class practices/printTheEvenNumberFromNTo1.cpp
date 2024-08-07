/* 
Topic:
----------
Recursion

Question:-
Print the even number from N to 1 when N is a even number, use recursion here.

*/


#include<iostream>
using namespace std;  

void printEvenNum(int n){
  if(n%2 == 0 && n > 0){
    cout<<n<<" ";
  }
  printEvenNum(n-2);
}
void print(int n){
  if(n == 2){
    cout << 2 << " ";
    return;
  }

  cout << n << " ";
  print(n-2);
}

int main() {

  int n;
  cout << "enter the number n:";
  cin >> n;

  cout << "Print the even number from N to 1: "<< endl;
  // printEvenNum(n);
  print(n);

  return 0;
}





/* 
Output:-
----------
enter the number n:6
Print the even number from N to 1: 
6 4 2



*/


