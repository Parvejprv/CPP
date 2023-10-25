/* 
  Author    :     Parvej Alam
  Date      :     05-10-2k23

*/

// Question:- Function To perform the addition substraction, mult, div


#include<iostream>
using namespace std;


// method to calculate sum of two number
int Sum (int a, int b) {
  int ans = a+b;
  return ans;
}
// method to calculate sub of two number
int Sub (int a, int b) {
  int ans = a-b;
  return ans;
}
// method to calculate mul of two number
int Mul (int a, int b) {
  int ans = a*b;
  return ans;
}
// method to calculate div of two number
int Div (int a, int b) {
  int ans = a/b;
  return ans;
}


int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  // Calling a function 
  int sum = Sum(a, b);
  cout << sum << endl; 
  int sub = Sub(a, b);
  cout << sub << endl; 
  int mul = Mul(a, b);
  cout << mul << endl; 
  int div = Div(a, b);
  cout << div << endl; 

}