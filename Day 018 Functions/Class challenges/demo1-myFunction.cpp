/* 
  Author    :     Parvej Alam
  Date      :     05-10-2k23

*/

// Question:- Function Practice


#include<iostream>
using namespace std;

// method to check if a number is prime or not
bool isPrime(int n) {
  // if number is less than 2 , there is no prime number for that
  if(n < 2)
  return 0;

  for(int i=2; i<n; i++){
    if (n%i == 0)
    {
      return 0;
    }
  }
  return 1;
}

// method to calculate thefactorial
int Fact(int n){
  int fact = 1;
  for(int i=1; i<=n; i++){
    fact *= i;
  }
  return fact;
}

// method to calculate sum of two number
int Sum () {
  int ans = a+b;
  return ans;
}


int main() {
  int a, b;
  cout << "Enter two numbers: ";
  cin >> a >> b;

  // check if a is prime or not 
  cout << isPrime(a) << endl;
  // calculate the factorial of a
  cout << Fact(a) << endl;
  // check if b is prime or not 
  cout << isPrime(b) << endl;
  // calculate the factorial of b
  cout << Fact(b) << endl;
  // check if b-a is prime or not 
  cout << isPrime(b-a) << endl;
  // calculate the factorial of b-a
  cout << Fact(b-a) << endl;

  // Calling a function to sum of these two number
  int sum = Sum(a, b);
  cout << sum << endl; 

}