#include<iostream>
using namespace std; 

int main() {
  string s = "namas";
  cout << "Original String: "<<s<<endl;   //printing the original string

  int start = 0, end = s.size()-1;

  while(start < end){
    if(s[start] != s[end]){
      cout << "\"Not a Pallindrome\" string.";
      return 0;
    }
    start++;
    end--;
  }
  cout << "Yes!, it is a \"Palindrome\" string." << endl;

  // return 0;
}


/*  
Output:-
--------
Original String: naman
Yes!, it is a "Palindrome" string



Original String: namas
"Not a Pallindrome" string.

*/