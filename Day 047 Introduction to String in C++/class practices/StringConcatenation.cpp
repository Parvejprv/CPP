#include<iostream>
using namespace std;
int main() {
  // Let suppose I want to attach a single character to the given string, like I want to add the character  'a' at the ending of the string ", so that the string would be ParvejA

  cout << "Let suppose I want to attach a single character to the given string, like I want to add the character  'a' at the ending of the string, so that the string would be ParvejA" << endl;

  string s1 = "Parvej";
  // s1.push_back('A');

  cout << s1 << endl;

  cout << "-----------------" << endl;
  cout << "can we do using the other techniques too ?" << endl;
  // Answer:- Yes you can take another string s2 and concatenate each of the string too.
  string s2 = "P";

  s1 = s1 + s2;
  cout << s1 << endl;   // ParvejP


  // And, Let s
  

  return 0;
}

/*  
Output:-
---------
ParvejA

can we do using the other techniques too ?
ParvejP

*/