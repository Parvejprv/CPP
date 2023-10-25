/* 
  (1). Write a Program to take input from the user and check if the given input is prime or not prime.
*/



#include<iostream>
using namespace std;

int main() {

  int n;
  cout << "enter number : ";
  cin >> n;
  if(n<2){
    cout << "Not Prime";
    return 0;
  } else {
    for(int i=2; i<n; i++){
      if(n%i == 0) {
        cout<<"\nNot prime ";
        return 0;
      }
    }
    cout << "prime";
  }
}