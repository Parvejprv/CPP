#include<iostream>
using namespace std;
// Now, Let suppose we want to find out the size of the string without using the build-in function | size()

int size(string s){
  int size = 0;

  while(s[size] != '\0'){
    size++;
  }
  return size;
}


void reverseString(string s){
  // this is the size of a string using the built-in function
  // int n = s.size();

  // without using the built-in function
  int n = size(s);

  int start = 0, end = n - 1;

  while(start < end){
    swap(s[start], s[end]);
    start++;
    end--;
  }

  cout << "string after reversing the string = " << s << endl;
}

int main() {

  string s = "Rohit";

  // Function call to reverse the String  using a function.
  reverseString(s);

  return 0;
}


/*  
Output:-
----------
string after reversing the string = tihoR

*/