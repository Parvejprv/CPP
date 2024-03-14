/*  
5. Print a messageToDisplay n times using the Function.
*/

#include<iostream>
using namespace std;
void PrintMessage(int s) {
  for(int i=1; i<=s; i++){
    cout<<"Welcome to C2C Learning!\n";
  }
}
int main() {
  int size;
  cout << "Enter the size till you want to print the message : ";
  cin >> size;

  // Calling a Function
  PrintMessage(size);
}