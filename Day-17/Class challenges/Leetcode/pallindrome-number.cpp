/*  
    Author    :     Parvej alam
    Date      :     05-10-2023
*/

// Pallindrome number

#include<iostream>
using namespace std;
int main() {
  int num, rem = 0, reverse = 0;
  cout << "Enter a number: ";
  cin >> num;
  int Number = num;

  if(num < 1) {
    cout << "Please enter a positive number.";
  }

  while(Number != 0 && Number > 0) {
    rem = Number%10;
    reverse = reverse * 10 + rem;
    Number /= 10;
  }

  //cout << "reverse number : " << reverse << endl;
  if(reverse == num){
    cout<<"The given number is Palindrome";
  } else {
    cout<<"The given number is not Palindrome";
  }

  return 0;
}
