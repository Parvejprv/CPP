/*  
Question : String Matching
=============================
link: https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

haystack : "abacdabad"
needel : "abad"

Output:
---------
5

*/







/* Optimized approach */

#include<iostream>
#include<vector>
using namespace std;

// finding lps
int findLongestPrefixSuffix(vector<int> &lps, string &s){

  int pre = 0, suf = 1;
  while(suf < s.size()){
    // Matched
    if(s[pre] == s[suf]){
      lps[suf] = pre + 1;
      pre++, suf++;
    }
    // Not Matched
    else {
      // if pre at index 0
      if(pre == 0){
        lps[suf] = 0;
        suf++;
      } else {
        pre = lps[pre - 1];
      }
    }
  }

  return lps[s.size()-1];
}

int stringMatchingIndexFrom(string &hystack, string &needle){
  vector<int>lps(needle.size(), 0);

  findLongestPrefixSuffix(lps, needle);

  int first = 0, second = 0;

  // runs a loop over first and second both is going as well
  while(second < needle.size() && first < hystack.size()){
    // Match
    if(needle[second] == hystack[first]){
      first++, second++;
    }
    // Not Matched
    else {
      // Let say if second point stands at 0
      if(second == 0){
        first++;
      } 
      // not at 0
      else {
        second = lps[second-1];
      }
    }
  }

  if(second == needle.size()){
    return first-second;
  }
  return -1;
}

int main() {
  string str, substr;
  cout << "Enter the first string str: ";
  cin >> str;
  cout << "Enter the second string (substring): ";
  cin >> substr;

  // function call for string matching
  int resultStringMatchingIndex = stringMatchingIndexFrom(str, substr);
  cout << "String Matching Index: " << resultStringMatchingIndex << endl;

  return 0;
}






/*  
Output:-
---------
Enter the first string str:: abcxabcdabxabcdabcdabcy
Enter the second string (substring): abcdabcy
String Matching Index: 15


Enter the first string str: cdabcdacy
Enter the second string (substring): abcdacy
String Matching Index: 2

*/














/* Brute force approach */
/*
#include<iostream>
using namespace std;
int stringMatching(string &haystack, string &needel){
  int n = haystack.size(), m = needel.size();

  for(int i = 0; i < n-m; i++){
    int first = i, second = 0;

    while(second < m){
      // if haystack[first] matches to needel[second] then only increment first, second
      if(haystack[first] != needel[second]){
        break;
      } else {
        first++, second++;
      }
    }

    if(second == m){
      return (first-second);
    }
  }
  return -1;
}

int main() {
  string str1, str2;
  cout << "Enter first string: ";
  cin >> str1;
  cout << "Enter second string: ";
  cin >> str2;

  // function call 
  int stringMatchingIndex = stringMatching(str1, str2);
  cout << "substring matching index from: " << stringMatchingIndex << endl;

  return 0;
}
*/


/*  
Time Complexity: O(nm)
Space complexity: O(1)

Output:-
---------
Enter first string: abacdabad
Enter second string: abad
substring matching index from: 5



*/