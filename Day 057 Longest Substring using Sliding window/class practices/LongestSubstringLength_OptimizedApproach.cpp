/*  
Topic : Sliding window
=======================
Question : Write a CPP to get the longest substring length without repeating character of the string. here a string can be anything like, alphabets, number, and symbols.
*/


#include <iostream>
#include<vector>
using namespace std;
int longestSubstringLength(string &s){
  vector<bool> counts (256, 0);       // a vector of size 256

  int first = 0, second = 0, len = 0;

  while(second < s.size()){
    // repeating character will be manage here
    while(counts[s[second]]){
      counts[s[first]] = 0;
      first++;
    }

    counts[s[second]] = 1;
    len = max(len, (second - first) + 1);
    second++;
  }
  return len;
}

int main()
{
  cout << "Enter string: ";
  string s;
  cin >> s;

  // function call
  int subtringLength =  longestSubstringLength(s);
  cout << "Longest substring length = " << subtringLength << endl;

  return 0;
}



/*  
Time Complexity: O(N)
Space Complexity :  O(1)


Output:-
-------------
Enter string: AABBBCBBAC
Longest substring length = 3



*/