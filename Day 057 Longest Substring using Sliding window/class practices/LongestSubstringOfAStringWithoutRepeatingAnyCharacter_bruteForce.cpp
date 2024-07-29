/*  
Question:-
------------
Given a string find the longest subtring of the given string without repeating any character of that.

Input: "abcabcbb"
Output: 3




*/


#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

bool allUnique(const string &s, int start, int end){
  // create an unordered set of characters
  unordered_set<char> chars;

  for(int i = start; i < end; i++){
    char c = s[i];

    if(chars.find(c) != chars.end()){
      return false;
    }
    chars.insert(c);
  }
  return true;
}

// "abcabcbb"
int longestSubstring(string s) {
  // int n = s.length();   // length of the string 

  int ans = 0;
  for(int i = 0; i < s.length() ; i++){
    cout << " i : " << i << "\t" ;
    for(int j =  i + 1; j <= s.length(); j++){
      cout << " j : " << j << " " << endl;
      if(allUnique(s, i, j)){
        ans = max(ans, j-i);
        cout << "Yes, unique and max = " << ans << " "  << endl;
      }
    }
  }

  return ans;
}


int main() {
  string s;
  cout << "Enter a String to find the Longest substring length : " ;
  cin >> s;
  
  // function call 
  cout << "The Longest substring length is: " << longestSubstring(s) << endl;

  return 0;
}


/* 
Output:-
--------
TC: O(N^3)
SC: O(1)

Enter a String to find the Longest substring length : abcabcbb
The Longest substring length is: 3
*/