/* 
(1). Write a Program to calculate and print the factorial.
hint: n! = n*(n-1)*(n-2)*(n-3) ...*1
*/

#include<iostream>
using namespace std;

int main() {

  // (a).
  int n, fact;
  cout << "enter n:";
  cin >> n; fact = 1;
  for(int i=1; i<=n; i++) {
    fact = fact * i;
  }
  cout << "factorial of number " << n <<" : " << fact;

}


/* 
return 0:
--------- 
return 0 is used to ext entire main function.

int n;
cin >> n;
if(n<2){
  cout << "Not Prime";
  return 0;
} else {
  for(int i=2; i<n; i++){
    if(n%i == 0) {
      cout<<"\n Not prime ";
      return 0;
    }
  }
  cout << "prime";
}

*/