

/*  
Question: WAP to reverse a string with the help of recursion.

Input: "rohit"
Output: "tihor"

Input: "MOMO"
Output: "OMOM"

*/

#include<iostream>
using namespace std;
void rev(string &str, int start, int end){
  // Base case
  if(start >= end){
    return;
  }

  // Lets swap the str[start] with str[end]
  char c = str[start];
  str[start] = str[end];
  str[end] = c;

  // call the rev() function again so that, it could be recursive function
  rev(str, start+1, end-1); 
}

int main() {
  string str;
  cout << "enter the string str:";
  cin >> str;

  int start = 0;
  int end = str.size()-1;
  rev(str, start, end);

  cout << str << endl;
}

/*  
Output:-
----------
enter the string str:rohit
tihor

*/




